#ifndef SPELLBOOK_H
# define SPELLBOOK_H

# include <iostream>
# include <vector>
# include "ASpell.hpp"

class SpellBook
{
	private:
		std::vector<ASpell*>	book;

		SpellBook(SpellBook const & cpy);
		SpellBook & operator=(SpellBook const & right);
		
		std::vector<ASpell*>::iterator	findSpell(std::string str);

	public:
		SpellBook(void);
		~SpellBook(void);
		
		void			learnSpell(ASpell * spell);
		void			forgetSpell(std::string str);
		void			launchSpell(std::string str, ATarget & tgt);
};

#endif
