#ifndef TARGETGENERATOR_H
# define TARGETGENERATOR_H

# include <iostream>
# include <vector>
# include "ATarget.hpp"

class TargetGenerator
{
	private:
		std::vector<ATarget*>	book;

		TargetGenerator(TargetGenerator const & cpy);
		TargetGenerator & operator=(TargetGenerator const & right);
		
		std::vector<ATarget*>::iterator	findSpell(std::string str);

	public:
		TargetGenerator(void);
		~TargetGenerator(void);
		
		void			learnTargetType(ATarget * spell);
		void			forgetTargetType(std::string str);
		ATarget *		createTarget(std::string const & n);
};

#endif
