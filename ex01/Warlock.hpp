#ifndef WARLOCK_H
# define WARLOCK_H

# include <iostream>
# include <string>
# include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
	private:
		Warlock(void);
		Warlock(Warlock const & cpy);
		Warlock & operator=(Warlock const & right);

		std::string	name;
		std::string	title;
		std::map<std::string, ASpell*>	book;


	public:
		Warlock(std::string n, std::string t);
		~Warlock(void);

		std::string	getName(void) const;
		std::string	getTitle(void) const;

		void		setTitle(std::string nt);
		void		introduce(void) const;

		void	learnSpell(ASpell * s);
		void	forgetSpell(std::string n);
		void	launchSpell(std::string n, ATarget & tgt);

};

#endif
