/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 23:45:57 by echerell          #+#    #+#             */
/*   Updated: 2022/05/04 13:50:43 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie()
{
	std::cout << "\033[31mZombie " << this->_m_name << " died T_T\n\033[37m";
}

void Zombie::announce(void) const
{
	std::cout << "\033[33m" << this->_m_name << ": BraiiiiiiinnnzzzZ...\n\033[37m";
}

void Zombie::setName(const std::string &str)
{
	this->_m_name = str;
}
