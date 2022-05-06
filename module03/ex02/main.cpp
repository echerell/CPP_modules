/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:36:35 by echerell          #+#    #+#             */
/*   Updated: 2022/05/06 18:32:39 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
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

	std::cout << "__Test3__\n";
	FragTrap	trap3("FragDoomed");

	trap3.attack("Minion");
	trap3.takeDamage(50);
	trap3.beRepaired(30);
	trap3.takeDamage(20);
	trap3.beRepaired(30);
	trap3.takeDamage(90);
	trap3.attack("Minion");
	trap3.highFivesGuys();

	std::cout << "__Test4__\n";
	FragTrap	trap4("FragStrongy");

	trap4.attack("Big minion");
	trap4.takeDamage(50);
	trap4.attack("Big minion");
	trap4.beRepaired(20);
	trap4.beRepaired(10);
	trap4.beRepaired(10);
	trap4.beRepaired(10);
	trap4.beRepaired(10);
	trap4.attack("Small minion");
	trap4.takeDamage(20);
	trap4.beRepaired(10);
	trap4.beRepaired(10);
	trap4.beRepaired(10);
	trap4.attack("Small minion");
	trap4.highFivesGuys();

	return 0;
}
