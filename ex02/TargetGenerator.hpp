/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 11:38:13 by graja             #+#    #+#             */
/*   Updated: 2022/03/25 13:44:01 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENeRATOR_H
# define TARGETGENERATOR_H

# include <vector>
# include <iostream>
# include "ATarget.hpp"

class TargetGenerator
{
	private:
		std::vector<ATarget*>	book;

		TargetGenerator(TargetGenerator const & cpy);
		TargetGenerator & operator=(TargetGenerator const & right);
		
		std::vector<ATarget*>::iterator	findTarget(std::string const & spl);

	public:
		TargetGenerator(void);
		~TargetGenerator(void);

		void			learnTargetType(ATarget * spell);
		void			forgetTargetType(std::string const & name);
		ATarget *		createTarget(std::string const & name);
};

#endif
