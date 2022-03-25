/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:48:40 by graja             #+#    #+#             */
/*   Updated: 2022/03/25 09:42:37 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"

int	main(void)
{
	Warlock test("jimmy", "the best");
	Fwoosh	*lala = new Fwoosh;

	test.learnSpell(lala->clone());
	test.learnSpell(lala->clone());
	test.introduce();
	test.forgetSpell("Fwoosh");
	test.learnSpell(lala->clone());
	delete lala;
	return (0);
}
