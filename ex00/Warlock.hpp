/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:15:13 by graja             #+#    #+#             */
/*   Updated: 2022/03/24 13:32:33 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_H
# define WARLOCK_H

# include <iostream>
# include <string>

class Warlock
{
	private:
		std::string	name;
		std::string	title;

		Warlock(void);
		Warlock(Warlock const & cpy);
		Warlock & operator=(Warlock const & right);

	public:
		Warlock(std::string n, std::string t);
		~Warlock(void);

		std::string const &	getName(void) const;
		std::string const &	getTitle(void) const;

		void			setTitle(std::string const & nt);
		void			introduce(void) const;
};

#endif
