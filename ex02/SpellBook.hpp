#ifndef SPELLBOOK_H
# define SPELLBOOK_H

# include <iostream>
# include <string>
# include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class SpellBook
{
	private:
		SpellBook(SpellBook const & cpy);
		SpellBook & operator=(SpellBook const & right);

		std::map<std::string, ASpell*>	book;


	public:
		SpellBook(void);
		~SpellBook(void);

		void	learnSpell(ASpell * s);
		void	forgetSpell(std::string const & n);
		ASpell *	createSpell(std::string const & n);

};

#endif
