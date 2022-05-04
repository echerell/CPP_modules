/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 21:42:37 by echerell          #+#    #+#             */
/*   Updated: 2022/05/04 13:53:53 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cout << "\033[31mError: Negative or zero amount of zombies\033[37m\n";
		return NULL;
	}

	Zombie	*horde = new Zombie[N];
	if (!horde)
	{
		std::cout << "\033[31mError: Failed to allocate memory\033[37m\n";
		return NULL;
	}
	for (int i = 0; i < N; i++)
		horde[i].setName(name);

	return horde;
}
