/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:33:39 by graja             #+#    #+#             */
/*   Updated: 2022/03/25 11:25:53 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_H
# define BRICKWALL_H

# include "ATarget.hpp"

class BrickWall : public ATarget
{
	public:
		BrickWall(void);
		~BrickWall(void);

		ATarget *	clone(void) const;
};

#endif
