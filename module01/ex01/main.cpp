/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 21:42:22 by echerell          #+#    #+#             */
/*   Updated: 2022/05/04 13:54:00 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie	*horde;

	std::cout << "Test1, N <= 0\n";
	horde = zombieHorde(-5, "Karl");

	std::cout << "Test3, N > 0\n";
	horde = zombieHorde(10, "Smith");
	if (!horde)
		return 1;
	for (int i = 0; i < 10; i++)
		horde[i].announce();
	delete [] horde;
	return 0;
}
