/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:57:08 by echerell          #+#    #+#             */
/*   Updated: 2022/05/04 14:04:21 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);

	std::cout << "\033[33mHuman with reference\033[37m\n";
	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	std::cout << "\033[33mHuman with pointer\033[37m\n";
	Weapon club1 = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club1);
	jim.attack();
	club1.setType("some other type of club");
	jim.attack();

	return 0;
}
