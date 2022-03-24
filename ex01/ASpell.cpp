/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:43:40 by graja             #+#    #+#             */
/*   Updated: 2022/03/24 14:25:18 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(void)
{}

ASpell::ASpell(ASpell const & cpy)
{
	*this = cpy;
}

ASpell & ASpell::operator=(ASpell const & right)
{
	name = right.name;
	effects = right.effects;
	return (*this);
}

ASpell::ASpell(std::string n, std::string e): name(n), effects(e)
{}

ASpell::~ASpell(void)
{}

std::string	ASpell::getName(void) const
{
	return (name);
}

std::string	ASpell::getEffects(void) const
{
	return (effects);
}
		
void		ASpell::launch(ATarget const & tgt) const
{
	tgt.getHitBySpell(*this);
}
