/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:48:40 by graja             #+#    #+#             */
/*   Updated: 2022/03/25 11:32:06 by graja            ###   ########.fr       */
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

int	main(void)
{
	Warlock		test("jimmy", "the best");
	Fwoosh		*lala = new Fwoosh;
	Fireball	fire;
	Dummy		dumm;

	test.learnSpell(lala->clone());
	test.learnSpell(fire.clone());
	test.introduce();
	test.forgetSpell("Fwoosh");
	test.learnSpell(lala->clone());
	test.launchSpell("Fwoosh", dumm);
	test.launchSpell("Fireball", dumm);
	delete lala;

	return (0);
}
