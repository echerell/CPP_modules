/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:30:01 by echerell          #+#    #+#             */
/*   Updated: 2022/05/04 13:39:53 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, const Weapon &weapon) :
				_m_name(name), _m_weapon(weapon)
{
}

HumanA::~HumanA() {}

void HumanA::attack(void) const
{
	std::cout << this->_m_name << " attacks with their " << this->_m_weapon.getType() << std::endl;
}
