/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:47:29 by echerell          #+#    #+#             */
/*   Updated: 2022/05/06 18:34:23 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_m_name = "unnamed";
	this->_m_hitPt = 100;
	this->_m_enrgPt = 100;
	this->_m_atkDam = 30;
	std::cout << "\033[32mFragTrap Default constructor called\033[37m\n";
}

FragTrap::FragTrap(const std::string &name)
{
	this->_m_name = name;
	this->_m_hitPt = 100;
	this->_m_enrgPt = 100;
	this->_m_atkDam = 30;
	std::cout << "\033[32mFragTrap Initializing constructor called\033[37m\n";
}

FragTrap::~FragTrap()
{
	std::cout << "\033[31mFragTrap Destructor called\033[37m\n";
}

void FragTrap::highFivesGuys(void) const
{
	std::cout << "High five, guys\n";
}
