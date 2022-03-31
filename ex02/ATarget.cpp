#include "ATarget.hpp"

		std::string	type;

ATarget::ATarget(void)
{}

ATarget::ATarget(ATarget const & cpy)
{
	*this = cpy;
}

ATarget & ATarget::operator=(ATarget const & right)
{
	type = right.type;
	return (*this);
}

ATarget::ATarget(std::string t): type(t)
{}

ATarget::~ATarget(void)
{}

std::string const &	ATarget::getType(void) const
{
	return (type);
}

void ATarget::getHitBySpell(ASpell const & s) const
{
	std::cout << type << " has been " << s.getEffects() << "!" << std::endl;
}
