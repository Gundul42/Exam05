
# include "Warlock.hpp"

Warlock::Warlock(void)
{}

Warlock::Warlock(Warlock const & cpy): name(cpy.name), title(cpy.title) {}

Warlock & Warlock::operator=(Warlock const & right)
{
	name = right.name;
	title = right.title;
	return (*this);
}

Warlock::Warlock(std::string n, std::string t): name(n), title(t) 
{
	std::cout << name << ": This looks like another boring day." << std::endl;
}


std::string	Warlock::getName(void) const
{
	return (name);
}

std::string	Warlock::getTitle(void) const
{
	return (title);
}

void		Warlock::setTitle(std::string nt)
{
	title = nt;
};

Warlock::~Warlock(void)
{
	std::cout << name << ": My job here is done!" << std::endl;
}

void		Warlock::introduce(void) const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}
		
void	Warlock::learnSpell(ASpell * s)
{
	book.insert(std::make_pair(s->getName(), s));
}

void	Warlock::forgetSpell(std::string n)
{
	book.erase(n);
}

void	Warlock::launchSpell(std::string n, ATarget & tgt)
{
	std::map<std::string, ASpell*>::iterator in;

	in = book.find(n);
	if (in == book.end())
		return ;
	((*in).second)->launch(tgt);
}
