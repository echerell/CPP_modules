/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 23:46:30 by echerell          #+#    #+#             */
/*   Updated: 2022/05/04 11:19:45 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie	*zombo;

	zombo = new Zombie(name);
	if (!zombo)
	{
		std::cout << "\033[31mError: Failed to allocate memory\033[37m\n";
		return NULL;
	}

	return zombo;
}
