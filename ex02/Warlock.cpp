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

void Warlock::learnSpell(ASpell * s)
{
	book.learnSpell(s);
}

void Warlock::forgetSpell(std::string s)
{
	book.forgetSpell(s);
}

void Warlock::launchSpell(std::string str, ATarget & tgt)
{
	book.launchSpell(str, tgt);
}
