#include "ASpell.hpp"



		std::string	name;
		std::string	effects;

ASpell::ASpell(void)
{}

ASpell::ASpell(ASpell const & cpy)
{
	*this = cpy;
}

ASpell & ASpell::operator=(ASpell const & right)
{
	name = right.name;
	effects = right.effects;
	return (*this);
}

ASpell::ASpell(std::string n, std::string e): name(n), effects(e)
{}

ASpell::~ASpell(void)
{}


std::string	ASpell::getName(void) const
{
	return (name);
}

std::string	ASpell::getEffects(void) const
{
	return (effects);
}

void		ASpell::launch(ATarget const & tgt) const
{
	tgt.getHitBySpell(*this);
}
