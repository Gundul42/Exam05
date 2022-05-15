
# include "ATarget.hpp"

	ATarget::ATarget(void) {}

	ATarget::ATarget(ATarget const & cpy) {*this = cpy;}

	ATarget & ATarget::operator=(ATarget const & right)
{
	type = right.type;
	return(*this);
}


ATarget::ATarget(std::string n): type(n) {}

ATarget::~ATarget(void) {}


std::string	ATarget::getType(void) const { return type;}


		void	ATarget::getHitBySpell(ASpell const & spl) const
{
	std::cout << type << " has been " << spl.getEffects() << "!" << std::endl;
}

