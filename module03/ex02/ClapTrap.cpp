/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:14:54 by echerell          #+#    #+#             */
/*   Updated: 2022/05/06 18:35:09 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
	_m_name("unnamed"), _m_hitPt(10), _m_enrgPt(10), _m_atkDam(0)
{
	std::cout << "\033[32mClapTrap Default constructor called\033[37m\n";
}

ClapTrap::ClapTrap(const std::string &name) :
	_m_name(name), _m_hitPt(10), _m_enrgPt(10), _m_atkDam(0)
{
	std::cout << "\033[32mClapTrap Initializing constructor called\033[37m\n";
}

ClapTrap::ClapTrap(const ClapTrap &cp)
{
	std::cout << "\033[33mClapTrap Copy constructor called\033[37m\n";
	*this = cp;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[31mClapTrap Destructor called\033[37m\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &asg)
{
	std::cout << "\033[33mClapTrap Copy assignment operator called\033[37m\n";
	this->_m_name = asg._m_name;
	this->_m_atkDam = asg._m_atkDam;
	this->_m_enrgPt = asg._m_enrgPt;
	this->_m_hitPt = asg._m_hitPt;

	return *this;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_m_enrgPt && this->_m_hitPt)
	{
		std::cout << "Trap " << this->_m_name << " attacks " << target
				<< ", causing " << this->_m_atkDam << " points of damage!\n";
		this->_m_enrgPt--;
		std::cout << "Energy points now are " << this->_m_enrgPt << std::endl;
	}
	else
		std::cout << "Not enough energy or hit points\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_m_hitPt)
	{
		this->_m_hitPt -= amount;
		if (this->_m_hitPt < 0)
			this->_m_hitPt = 0;
	}
	std::cout << "Trap " << this->_m_name
			<< " has taken "<< amount <<" points of damage and now its hit points are "
			<< this->_m_hitPt << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_m_enrgPt)
	{
		this->_m_hitPt += amount;
		this->_m_enrgPt--;
		std::cout << "Trap " << this->_m_name << " repaired itself for "
				<< amount << " points and now hit points are " << this->_m_hitPt
				<< ", energy point are " << this->_m_enrgPt << std::endl;
	}
	else
		std::cout << "Not enough energy points\n";
}
