/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:36:35 by echerell          #+#    #+#             */
/*   Updated: 2022/05/06 18:29:31 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "__Test1__\n";
	ScavTrap	trap("ScavDoomed");

	trap.attack("Minion");
	trap.takeDamage(50);
	trap.beRepaired(30);
	trap.takeDamage(20);
	trap.beRepaired(30);
	trap.takeDamage(90);
	trap.attack("Minion");
	trap.guardGate();

	std::cout << "__Test2__\n";
	ScavTrap	trap1("ScavStrongy");

	trap1.attack("Big minion");
	trap1.takeDamage(50);
	trap1.attack("Big minion");
	trap1.beRepaired(20);
	trap1.beRepaired(10);
	trap1.beRepaired(10);
	trap1.beRepaired(10);
	trap1.beRepaired(10);
	trap1.attack("Small minion");
	trap1.takeDamage(20);
	trap1.beRepaired(10);
	trap1.beRepaired(10);
	trap1.beRepaired(10);
	trap1.attack("Small minion");
	trap1.guardGate();

	return 0;
}
