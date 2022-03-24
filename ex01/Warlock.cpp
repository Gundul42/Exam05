/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:21:03 by graja             #+#    #+#             */
/*   Updated: 2022/03/24 19:03:59 by graja            ###   ########.fr       */
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

Warlock::Warlock(std::string n, std::string t): name(n), title(t), spells()
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
	if (findSpell(spell->getName()) != spells.end())
	{
		delete spell;
		std::cout << "I already know this" << std::endl;
		return ;
	}
	std::cout << "learnSpell" << std::endl;
	spells.push_back(spell);
	std::cout << spells.size() << " are now in memory" << std::endl;
}

void			Warlock::forgetSpell(std::string const & name)
{
	std::vector<ASpell*>::iterator in;

	in = findSpell(name);
	if (in == spells.end())
		return ;
	delete *in;
	spells.erase(in);
}

void			Warlock::launchSpell(std::string const & name,
			       			ATarget const & tgt) const
{
	std::cout << name << " was launched at " << tgt.getType() << std::endl;
}
		
std::vector<ASpell*>::iterator	Warlock::findSpell(std::string const & spl)
{
	std::vector<ASpell*>::iterator	in;

	in = spells.begin();
	while (in != spells.end())
	{
		if ((*in)->getName() == spl)
			return (in);
		in++;
	}
	return (in);
}
