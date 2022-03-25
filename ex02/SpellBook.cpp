#include "SpellBook.hpp"

SpellBook::SpellBook(void)
{}

SpellBook::SpellBook(SpellBook const & cpy)
{
	*this = cpy;
}

SpellBook & SpellBook::operator=(SpellBook const & right)
{
	book = right.book;
	return (*this);
}

SpellBook::~SpellBook(void)
{
	std::vector<ASpell*>::iterator in;

	std::cout << "Spellbook destroyed" << std::endl;
	in = book.begin();
	while (in != book.end())
	{
		delete *in;
		in++;
	}
}

void			SpellBook::learnSpell(ASpell * spell)
{
	if (findSpell(spell->getName()) != book.end())
	{
		std::cout << "I already know this" << std::endl;
		return ;
	}
	std::cout << spell->getName() << " spell learned" << std::endl;
	book.push_back(spell->clone());
	std::cout << book.size() << " spells are now in memory" << std::endl;
}

void			SpellBook::forgetSpell(std::string const & name)
{
	std::vector<ASpell*>::iterator in;

	in = findSpell(name);
	if (in == book.end())
		return ;
	delete *in;
	book.erase(in);
}

ASpell *		SpellBook::createSpell(std::string const & name)
{
	std::vector<ASpell*>::iterator in;

	in = findSpell(name);
	if (in == book.end())
		return (NULL);
	return ((*in)->clone());
}

std::vector<ASpell*>::iterator	SpellBook::findSpell(std::string const & spl)
{
	std::vector<ASpell*>::iterator	in;

	in = book.begin();
	while (in != book.end())
	{
		if ((*in)->getName() == spl)
			return (in);
		in++;
	}
	return (in);
}
