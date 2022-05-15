
# include "SpellBook.hpp"

SpellBook::SpellBook(void): book()
{}

SpellBook::SpellBook(SpellBook const & cpy): book(cpy.book){}

SpellBook & SpellBook::operator=(SpellBook const & right)
{
	this->book = right.book;
	return (*this);
}


SpellBook::~SpellBook(void)
{
}

		
void	SpellBook::learnSpell(ASpell * s)
{
	book.insert(std::make_pair(s->getName(), s));
}

void	SpellBook::forgetSpell(std::string const & n)
{
	book.erase(n);
}

ASpell *	SpellBook::createSpell(std::string const & n)
{
	std::map<std::string, ASpell*>::iterator in;

	in = book.find(n);
	if (in == book.end())
		return NULL;
	return ((*in.second)->clone());

}
