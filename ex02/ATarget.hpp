#ifndef ATARGET_H
# define ATARGET_H

# include <iostream>
# include <string>
# include "ASpell.hpp"
class ASpell;

class ATarget
{
	protected:
		ATarget(void);
		ATarget(ATarget const & cpy);
		ATarget & operator=(ATarget const & right);

		std::string	type;

	public:
		ATarget(std::string t);
		virtual ~ATarget(void);

		std::string	getType(void) const;

		void	getHitBySpell(ASpell const & spl) const;

		virtual ATarget *	clone(void) const = 0;
};

#endif
