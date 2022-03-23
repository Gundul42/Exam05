/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:34:16 by graja             #+#    #+#             */
/*   Updated: 2022/03/23 15:23:13 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(std::string iname, std::string ieffect): name(iname), effects(ieffect)
{}

ASpell::~ASpell(void)
{}

std::string const	ASpell::getName(void) const
{
	return (name);
}

std::string const	ASpell::getEffects(void) const
{
	return (effects);
}
