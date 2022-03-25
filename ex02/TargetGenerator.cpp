#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void)
{}

TargetGenerator::TargetGenerator(TargetGenerator const & cpy)
{
	*this = cpy;
}

TargetGenerator & TargetGenerator::operator=(TargetGenerator const & right)
{
	book = right.book;
	return (*this);
}

TargetGenerator::~TargetGenerator(void)
{
	std::vector<ATarget*>::iterator in;

	std::cout << "Targetbook destroyed" << std::endl;
	in = book.begin();
	while (in != book.end())
	{
		delete *in;
		in++;
	}
}

void			TargetGenerator::learnTargetType(ATarget * spell)
{
	if (findTarget(spell->getType()) != book.end())
	{
		std::cout << "I already know this" << std::endl;
		return ;
	}
	std::cout << spell->getType() << " spell learned" << std::endl;
	book.push_back(spell->clone());
	std::cout << book.size() << " spells are now in memory" << std::endl;
}

void			TargetGenerator::forgetTargetType(std::string const & name)
{
	std::vector<ATarget*>::iterator in;

	in = findTarget(name);
	if (in == book.end())
		return ;
	delete *in;
	book.erase(in);
}

ATarget *		TargetGenerator::createTarget(std::string const & name)
{
	std::vector<ATarget*>::iterator in;

	in = findTarget(name);
	if (in == book.end())
		return (NULL);
	return ((*in)->clone());
}

std::vector<ATarget*>::iterator	TargetGenerator::findTarget(std::string const & spl)
{
	std::vector<ATarget*>::iterator	in;

	in = book.begin();
	while (in != book.end())
	{
		if ((*in)->getType() == spl)
			return (in);
		in++;
	}
	return (in);
}
