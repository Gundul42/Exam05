/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:26:02 by graja             #+#    #+#             */
/*   Updated: 2022/03/23 14:06:17 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_H
# define WARLOCK_H

# include <string>
# include <iostream>

class Warlock
{
	private:
		std::string const	_name;
		std::string		_title;


	public:
		Warlock(std::string name, std::string title);
		~Warlock(void);

		std::string const &	getName(void) const;
		std::string const &	getTitle(void) const;

		void			setTitle(std::string const & newtitle);
		void			introduce(void) const;
};

#endif
