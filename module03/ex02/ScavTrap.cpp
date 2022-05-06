/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:22:55 by echerell          #+#    #+#             */
/*   Updated: 2022/05/06 18:31:27 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_m_name = "unnamed";
	this->_m_hitPt = 100;
	this->_m_enrgPt = 50;
	this->_m_atkDam = 20;
	std::cout << "\033[32mScavTrap Default constructor called\033[37m\n";
}

ScavTrap::ScavTrap(const std::string &name)
{
	this->_m_name = name;
	this->_m_hitPt = 100;
	this->_m_enrgPt = 50;
	this->_m_atkDam = 20;
	std::cout << "\033[32mScavTrap Initializing constructor called\033[37m\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[31mScavTrap Destructor called\033[37m\n";
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_m_enrgPt && this->_m_hitPt)
	{
		std::cout << "ScavTrap " << this->_m_name << " attacks " << target
				<< ", causing " << this->_m_atkDam << " points of damage!\n";
		this->_m_enrgPt--;
		std::cout << "Energy points now are " << this->_m_enrgPt << std::endl;
	}
	else
		std::cout << "Not enough energy or hit points\n";
}

void	ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap " << this->_m_name << "is now in Gate keeper mode\n";
}
