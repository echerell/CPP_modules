/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 23:45:54 by echerell          #+#    #+#             */
/*   Updated: 2022/05/04 11:17:40 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie	one("Vasiliy");
	Zombie	*heap;

	std::cout << "main function definition from the stack\n";
	one.announce();

	std::cout << "function return Zombie* created from the heap\n";
	heap = newZombie("Mario");
	if (!heap)
		return 1;
	heap->announce();
	std::cout << "delete the class\n";
	delete heap;

	std::cout << "Zombie within the function from the stack\n";
	randomChump("Mihalich");

	return 0;
}
