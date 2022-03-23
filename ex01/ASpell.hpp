/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:21:42 by graja             #+#    #+#             */
/*   Updated: 2022/03/23 15:21:06 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_H
# define ASPELL_H

# include <string>
# include <iostream>

class ASpell
{
	protected:
		std::string	name;
		std::string	effects;

	public:
		ASpell(std::string iname, std::string ieffect);
		virtual ~ASpell(void);

		std::string const	getName(void) const ;
		std::string const	getEffects(void) const;

		virtual	ASpell*			clone(void) const = 0;
};

#endif
