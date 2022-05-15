
# include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void): book()
{}

TargetGenerator::TargetGenerator(TargetGenerator const & cpy): book(cpy.book){}

TargetGenerator & TargetGenerator::operator=(TargetGenerator const & right)
{
	this->book = right.book;
	return (*this);
}


TargetGenerator::~TargetGenerator(void)
{
}

		
void	TargetGenerator::learnTargetType(ATarget * t)
{
	book.insert(std::make_pair(t->getType(), t));
}

void	TargetGenerator::forgetTargetType(std::string const & n)
{
	book.erase(n);
}

ATarget *	TargetGenerator::createTarget(std::string const & n)
{
	std::map<std::string, ATarget*>::iterator in;

	in = book.find(n);
	if (in == book.end())
		return NULL;
	return ((*in.second)->clone());

}
