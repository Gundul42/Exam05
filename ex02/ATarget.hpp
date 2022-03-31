#ifndef ATARGET_H
# define ATARGET_H

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
	protected:
		std::string	type;

		ATarget(void);
		ATarget(ATarget const & cpy);
		ATarget & operator=(ATarget const & right);

	public:
		ATarget(std::string t);
		virtual ~ATarget(void);

		std::string const &	getType(void) const;

		virtual ATarget*		clone(void) const = 0;
		void			getHitBySpell(ASpell const & s) const;
};

#endif
