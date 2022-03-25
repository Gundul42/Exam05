/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 11:38:13 by graja             #+#    #+#             */
/*   Updated: 2022/03/25 11:50:08 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_H
# define SPELLBOOK_H

# include <vector>
# include <iostream>
# include "ASpell.hpp"

class SpellBook
{
	private:
		std::vector<ASpell*>	book;

		SpellBook(SpellBook const & cpy);
		SpellBook & operator=(SpellBook const & right);
		
		std::vector<ASpell*>::iterator	findSpell(std::string const & spl);

	public:
		SpellBook(void);
		~SpellBook(void);

		void			learnSpell(ASpell * spell);
		void			forgetSpell(std::string const & name);
		ASpell *		createSpell(std::string const & name);
};

#endif
