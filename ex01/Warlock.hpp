#ifndef WARLOCK_H
# define WARLOCK_H

# include <iostream>
# include <string>
# include <vector>
# include "ASpell.hpp"
# include "ATarget.hpp"

class Warlock
{
	private:
		std::string		name;
		std::string		title;
		std::vector<ASpell*>	book;

		Warlock(void);
		Warlock(Warlock const & cpy);
		Warlock & operator=(Warlock const & right);
		
		std::vector<ASpell*>::iterator	findSpell(std::string str);

	public:

		Warlock(std::string const name, std::string const title);
		~Warlock(void);

		std::string const &	getName(void) const;
		std::string const &	getTitle(void) const;
		void			setTitle(std::string const & nt);

		void			introduce(void) const;

		void			learnSpell(ASpell * spell);
		void			forgetSpell(std::string str);
		void			launchSpell(std::string str, ATarget & tgt);
};

#endif
