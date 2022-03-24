/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:52:16 by graja             #+#    #+#             */
/*   Updated: 2022/03/24 14:33:10 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_H
# define ATARGET_H

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
	private:
		ATarget(void);
		ATarget(ATarget const & cpy);
		ATarget & operator=(ATarget const & right);

	protected:
		std::string	type;

	public:
		ATarget(std::string t);
		virtual ~ATarget(void);

		std::string const &	getType(void) const;

		void			getHitBySpell(ASpell const & spell) const;

		virtual ATarget *	clone(void) const = 0;
};

#endif
