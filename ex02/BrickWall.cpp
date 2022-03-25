/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:38:38 by graja             #+#    #+#             */
/*   Updated: 2022/03/25 11:25:11 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall(void): ATarget("Inconspicuous Red-brick Wall")
{}

BrickWall::~BrickWall(void)
{}


ATarget *	BrickWall::clone(void) const
{
	return (new BrickWall);
}
