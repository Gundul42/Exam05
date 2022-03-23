/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:23:20 by graja             #+#    #+#             */
/*   Updated: 2022/03/23 18:43:33 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_H
# define ATARGET_H

# include "ASpell.hpp"

class ASpell;

class ATarget
{
	protected:
		std::string	type;

	public:
		ATarget(std::string typ);
		virtual	~ATarget(void);

		std::string const &	getType(void) const;
		virtual ATarget*	*clone(void) const = 0;

		void			getHitBySpell(ASpell const & spell) const;
};

#endif
