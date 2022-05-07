/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:47:29 by echerell          #+#    #+#             */
/*   Updated: 2022/05/07 22:35:37 by echerell         ###   ########.fr       */
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

FragTrap &FragTrap::operator=(const FragTrap &asg)
{
	std::cout << "\033[33mFragTrap Copy assignment operator called\033[37m\n";
	this->_m_name = asg._m_name;
	this->_m_atkDam = asg._m_atkDam;
	this->_m_enrgPt = asg._m_enrgPt;
	this->_m_hitPt = asg._m_hitPt;

	return *this;
}

void FragTrap::highFivesGuys(void) const
{
	std::cout << "High five, guys\n";
}
