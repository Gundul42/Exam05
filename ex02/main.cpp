/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:48:40 by graja             #+#    #+#             */
/*   Updated: 2022/03/25 13:48:12 by graja            ###   ########.fr       */
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
#include "TargetGenerator.hpp"

int	main(void)
{
	/*
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
*/
Warlock richard("Richard", "foo");
  richard.setTitle("Hello, I'm Richard the Warlock!");
  BrickWall model1;

  Polymorph* polymorph = new Polymorph();
  TargetGenerator tarGen;

  tarGen.learnTargetType(&model1);
  richard.learnSpell(polymorph);

  Fireball* fireball = new Fireball();

  richard.learnSpell(fireball);

  ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

  richard.introduce();
  richard.launchSpell("Polymorph", *wall);
  richard.launchSpell("Fireball", *wall);
  delete polymorph;
  delete fireball;
  delete wall;
	return (0);
}
