#include "TargetGenerator.hpp"


TargetGenerator::TargetGenerator(TargetGenerator const & cpy)
{
	*this = cpy;
}

TargetGenerator & TargetGenerator::operator=(TargetGenerator const & right)
{
	book = right.book;
	return (*this);
}

TargetGenerator::TargetGenerator(void): book()
{}

TargetGenerator::~TargetGenerator(void)
{
	std::vector<ATarget*>::iterator	in;

	in = book.begin();
	while (in != book.end())
	{
		delete (*in);
		in++;
	}
}
		

void TargetGenerator::learnTargetType(ATarget * spell)
{
	std::vector<ATarget*>::iterator	in;

	in = findSpell(spell->getType());
	if (in != book.end())
		return;
	book.push_back(spell->clone());
}

void TargetGenerator::forgetTargetType(std::string str)
{
	std::vector<ATarget*>::iterator	in;

	in = findSpell(str);
	if (in == book.end())
		return;
	delete (*in);
	book.erase(in);
}

		
std::vector<ATarget*>::iterator	TargetGenerator::findSpell(std::string str)
{
	std::vector<ATarget*>::iterator	in;

	in = book.begin();
	while (in != book.end())
	{
		if ((*in)->getType() == str)
			return (in);
		in++;
	}
	return (in);
}

ATarget * TargetGenerator::createTarget(std::string const & n)
{
	std::vector<ATarget*>::iterator	in;

	in = findSpell(n);
	if (in == book.end())
		return (NULL);
	return ((*in)->clone());
}
