#include "SpellBook.hpp"


SpellBook::SpellBook(SpellBook const & cpy)
{
	*this = cpy;
}

SpellBook & SpellBook::operator=(SpellBook const & right)
{
	book = right.book;
	return (*this);
}

SpellBook::SpellBook(void): book()
{}

SpellBook::~SpellBook(void)
{
	std::vector<ASpell*>::iterator	in;

	in = book.begin();
	while (in != book.end())
	{
		delete (*in);
		in++;
	}
}
		

void SpellBook::learnSpell(ASpell * spell)
{
	std::vector<ASpell*>::iterator	in;

	in = findSpell(spell->getName());
	if (in != book.end())
		return;
	book.push_back(spell->clone());
}

void SpellBook::forgetSpell(std::string str)
{
	std::vector<ASpell*>::iterator	in;

	in = findSpell(str);
	if (in == book.end())
		return;
	delete (*in);
	book.erase(in);
}

void SpellBook::launchSpell(std::string str, ATarget & tgt)
{
	std::vector<ASpell*>::iterator	in;

	in = findSpell(str);
	if (in == book.end())
		return;
	tgt.getHitBySpell(*(*in));
}
		
std::vector<ASpell*>::iterator	SpellBook::findSpell(std::string str)
{
	std::vector<ASpell*>::iterator	in;

	in = book.begin();
	while (in != book.end())
	{
		if ((*in)->getName() == str)
			return (in);
		in++;
	}
	return (in);
}

