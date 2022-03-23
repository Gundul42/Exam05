/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:50:47 by graja             #+#    #+#             */
/*   Updated: 2022/03/23 14:07:41 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

int	main(void)
{
	Warlock const	jim("Jim", "the almighty");
	Warlock	*tst = new Warlock("Hanno", "the eggsmasher");

	std::cout << jim.getName() << " -> " << jim.getTitle() << std::endl;
	jim.introduce();
	tst->introduce();
	tst->setTitle("the fearless");
	tst->introduce();

	std::cout << tst->getName() << ", " << tst->getTitle() <<  std::endl;
	delete tst;
	return (0);
}
