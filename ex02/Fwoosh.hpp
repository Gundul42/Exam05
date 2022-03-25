/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:42:00 by graja             #+#    #+#             */
/*   Updated: 2022/03/24 14:53:30 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_H
# define FWOOSH_H

# include "ASpell.hpp"

class ASpell;

class Fwoosh : public ASpell
{
	public:
		Fwoosh(void);
		~Fwoosh(void);
		
		ASpell *	clone(void) const;
};

#endif
