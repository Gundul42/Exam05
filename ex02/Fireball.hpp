/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:42:00 by graja             #+#    #+#             */
/*   Updated: 2022/03/25 11:18:01 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_H
# define FIREBALL_H

# include "ASpell.hpp"

class ASpell;

class Fireball : public ASpell
{
	public:
		Fireball(void);
		~Fireball(void);
		
		ASpell *	clone(void) const;
};

#endif
