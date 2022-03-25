/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:48:40 by graja             #+#    #+#             */
/*   Updated: 2022/03/25 12:47:09 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"
#include "BrickWall.hpp"
#include "SpellBook.hpp"

int	main(void)
{
	Warlock		test("jimmy", "the best");
	Fwoosh		*lala = new Fwoosh;
	Fireball	fire;
	Dummy		dumm;
	SpellBook	thebook;


	test.learnSpell(lala);
	test.learnSpell(&fire);
	test.introduce();
	test.forgetSpell("Fwoosh");
	test.learnSpell(lala);
	test.launchSpell("Fwoosh", dumm);
	test.launchSpell("Fireball", dumm);

	thebook.learnSpell(&fire);
	thebook.learnSpell(lala);
	delete lala;

	return (0);
}
