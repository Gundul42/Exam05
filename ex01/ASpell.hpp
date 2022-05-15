#ifndef ASPELL_H
# define ASPELL_H

# include <iostream>
# include <string>
# include "ATarget.hpp"
class ATarget;

class ASpell
{
	protected:
		ASpell(void);
		ASpell(ASpell const & cpy);
		ASpell & operator=(ASpell const & right);

		std::string	name;
		std::string	effects;

	public:
		ASpell(std::string n, std::string e);
		virtual ~ASpell(void);

		std::string	getName(void) const;
		std::string	getEffects(void) const;

		void	launch(ATarget const & tgt);

		virtual ASpell *	clone(void) const = 0;
};

#endif
