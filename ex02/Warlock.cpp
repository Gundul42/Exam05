/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:21:03 by graja             #+#    #+#             */
/*   Updated: 2022/03/25 12:44:00 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(void)
{}

Warlock::Warlock(Warlock const & cpy)
{
	*this = cpy;
}

Warlock & Warlock::operator=(Warlock const & right)
{
	name = right.name;
	title = right.title;
	return (*this);
}

Warlock::Warlock(std::string n, std::string t): name(n), title(t), book()
{
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
	std::cout << name << ": My job here is done!" << std::endl;
}

std::string const &	Warlock::getName(void) const
{
	return (name);
}

std::string const &	Warlock::getTitle(void) const
{
	return (title);
}

void			Warlock::setTitle(std::string const & nt)
{
	title = nt;
}

void			Warlock::introduce(void) const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void			Warlock::learnSpell(ASpell * spell)
{
	book.learnSpell(spell);
}

void			Warlock::forgetSpell(std::string const & name)
{
	book.forgetSpell(name);
}

void			Warlock::launchSpell(std::string const & name, ATarget const & tgt)
{
	ASpell	*tmp = book.createSpell(name);
	if (!tmp)
		return ;
	tgt.getHitBySpell(*(tmp));
	delete tmp;
}
