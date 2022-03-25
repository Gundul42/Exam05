/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:42:00 by graja             #+#    #+#             */
/*   Updated: 2022/03/25 11:20:03 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_H
# define POLYMORPH_H

# include "ASpell.hpp"

class ASpell;

class Polymorph : public ASpell
{
	public:
		Polymorph(void);
		~Polymorph(void);
		
		ASpell *	clone(void) const;
};

#endif
