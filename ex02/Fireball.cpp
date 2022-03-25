/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:45:41 by graja             #+#    #+#             */
/*   Updated: 2022/03/25 11:16:56 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"


Fireball::Fireball(void): ASpell("Fireball", "burned to a crisp")
{}

Fireball::~Fireball(void)
{}

ASpell *	Fireball::clone(void) const
{
	return (new Fireball);
}
