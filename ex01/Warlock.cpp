#include "Warlock.hpp"

Warlock::Warlock(void)
{}

Warlock::Warlock(Warlock const & cpy)
{
	*this = cpy;
}


Warlock & Warlock::operator=(Warlock const & right)
{
	name = right.name;
	title = right.title;
	return (*this);
}


Warlock::Warlock(std::string const n, std::string const t): name(n), title(t)
{
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
	std::cout << name << ": My job here is done!" << std::endl;
}


std::string const &	Warlock::getName(void) const
{
	return (name);
}

std::string const &	Warlock::getTitle(void) const
{
	return (title);
}

void			Warlock::setTitle(std::string const & nt)
{
	title = nt;
}


void			Warlock::introduce(void) const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell * spell)
{
	std::vector<ASpell*>::iterator	in;

	in = findSpell(spell->getName());
	if (in != book.end())
		return;
	book.push_back(spell->clone());
}

void Warlock::forgetSpell(std::string str)
{
	std::vector<ASpell*>::iterator	in;

	in = findSpell(str);
	if (in == book.end())
		return;
	delete (*in);
	book.erase(in);
}

void Warlock::launchSpell(std::string str, ATarget & tgt)
{
	std::vector<ASpell*>::iterator	in;

	in = findSpell(str);
	if (in == book.end())
		return;
	tgt.getHitBySpell(*(*in));
}
		
std::vector<ASpell*>::iterator	Warlock::findSpell(std::string str)
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

