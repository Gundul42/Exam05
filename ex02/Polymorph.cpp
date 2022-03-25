/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:45:41 by graja             #+#    #+#             */
/*   Updated: 2022/03/25 11:19:13 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"


Polymorph::Polymorph(void): ASpell("Polymorph", "turned into a critter")
{}

Polymorph::~Polymorph(void)
{}

ASpell *	Polymorph::clone(void) const
{
	return (new Polymorph);
}
