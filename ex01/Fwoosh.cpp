/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:45:41 by graja             #+#    #+#             */
/*   Updated: 2022/03/24 14:55:21 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"


Fwoosh::Fwoosh(void): ASpell("Fwoosh", "fwooshed")
{}

Fwoosh::~Fwoosh(void)
{}

ASpell *	Fwoosh::clone(void) const
{
	return (new Fwoosh);
}
