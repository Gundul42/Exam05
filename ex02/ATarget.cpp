/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:57:53 by graja             #+#    #+#             */
/*   Updated: 2022/03/24 14:27:51 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(void)
{}

ATarget::ATarget(ATarget const & cpy)
{
	*this = cpy;
}

ATarget & ATarget::operator=(ATarget const & right)
{
	type = right.type;
	return (*this);
}

ATarget::ATarget(std::string t): type(t)
{}

ATarget::~ATarget(void)
{}

std::string const &	ATarget::getType(void) const
{
	return (type);
}
		
void			ATarget::getHitBySpell(ASpell const & spell) const
{
	std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}
