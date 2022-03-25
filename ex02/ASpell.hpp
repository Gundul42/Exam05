/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:36:35 by graja             #+#    #+#             */
/*   Updated: 2022/03/24 14:35:46 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_H
# define ASPELL_H

# include <iostream>
# include <string>
# include "ATarget.hpp"

class ATarget;

class ASpell
{
	private:
		ASpell(void);
		ASpell(ASpell const & cpy);
		ASpell & operator=(ASpell const & right);

	protected:
		std::string	name;
		std::string	effects;

	public:
		ASpell(std::string n, std::string e);
		virtual ~ASpell(void);

		std::string	getName(void) const;
		std::string	getEffects(void) const;

		void		launch(ATarget const & tgt) const;

		virtual ASpell *	clone(void) const = 0;
};

#endif
