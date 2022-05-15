#ifndef TARGETGENERATOR_H
# define TARGETGENERATOR_H

# include <iostream>
# include <string>
# include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class TargetGenerator
{
	private:
		TargetGenerator(TargetGenerator const & cpy);
		TargetGenerator & operator=(TargetGenerator const & right);

		std::map<std::string, ATarget*>	book;


	public:
		TargetGenerator(void);
		~TargetGenerator(void);

		void	learnTargetType(ATarget * t);
		void	forgetTargetType(std::string const & n);
		ATarget *	createTarget(std::string const & n);

};

#endif
