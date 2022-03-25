/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:15:13 by graja             #+#    #+#             */
/*   Updated: 2022/03/25 10:11:45 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_H
# define WARLOCK_H

# include <vector>
# include <iostream>
# include <string>
# include "ASpell.hpp"
# include "ATarget.hpp"

class Warlock
{
	private:
		std::string		name;
		std::string		title;
		std::vector<ASpell*>	spells;

		Warlock(void);
		Warlock(Warlock const & cpy);
		Warlock & operator=(Warlock const & right);
		
		std::vector<ASpell*>::iterator	findSpell(std::string const & spl);

	public:
		Warlock(std::string n, std::string t);
		~Warlock(void);

		std::string const &	getName(void) const;
		std::string const &	getTitle(void) const;

		void			setTitle(std::string const & nt);
		void			introduce(void) const;

		void			learnSpell(ASpell * spell);
		void			forgetSpell(std::string const & name);
		void			launchSpell(std::string const & name, ATarget const & tgt);

};

#endif
