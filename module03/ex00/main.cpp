/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:48:06 by echerell          #+#    #+#             */
/*   Updated: 2022/05/06 16:37:01 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << "__Test1__\n";
	ClapTrap	trap("Doomed");

	trap.attack("Minion");
	trap.takeDamage(5);
	trap.beRepaired(3);
	trap.takeDamage(2);
	trap.beRepaired(3);
	trap.takeDamage(9);
	trap.attack("Minion");

	std::cout << "__Test2__\n";
	ClapTrap	trap1("Weakky");

	trap1.attack("Big minion");
	trap1.takeDamage(5);
	trap1.attack("Big minion");
	trap1.beRepaired(2);
	trap1.beRepaired(1);
	trap1.beRepaired(1);
	trap1.beRepaired(1);
	trap1.beRepaired(1);
	trap1.attack("Small minion");
	trap1.takeDamage(2);
	trap1.beRepaired(1);
	trap1.beRepaired(1);
	trap1.beRepaired(1);
	trap1.attack("Small minion");

	return 0;
}
