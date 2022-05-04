/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:40:11 by echerell          #+#    #+#             */
/*   Updated: 2022/05/04 13:47:54 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() {}

HumanB::HumanB(const std::string &name) : _m_name(name), _m_weapon(NULL) {}

HumanB::~HumanB() {}

void HumanB::attack(void) const
{
	std::cout << _m_name << " attacks with their " << _m_weapon->getType() << std::endl;
}

void HumanB::setWeapon(const Weapon &weapon)
{
	this->_m_weapon = &weapon;
}
