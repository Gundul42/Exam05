#ifndef ASPELL_H
# define ASPELL_H

# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell
{
	protected:

		std::string	name;
		std::string	effects;

		ASpell(void);
		ASpell(ASpell const & cpy);
		ASpell & operator=(ASpell const & right);

	public:
		ASpell(std::string n, std::string e);
		virtual ~ASpell(void);

		std::string	getName(void) const;
		std::string	getEffects(void) const;
		
		void		launch(ATarget const & tgt) const;

		virtual ASpell*	clone(void) const = 0;
};

#endif
