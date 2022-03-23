/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:49:47 by graja             #+#    #+#             */
/*   Updated: 2022/03/23 18:55:46 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_H
# define FWOOSH_H

# include "ASpell.hpp"

class ASpell;

class Fwoosh : public ASpell
{
	Fwoosh(std::string n, std::string e);
	~Fwoosh(void);
	Fwoosh(Fwoosh const & cpy);

	Fwoosh &	operator=(Fwoosh const & right);
}
