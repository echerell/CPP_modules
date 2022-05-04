/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:16:32 by echerell          #+#    #+#             */
/*   Updated: 2022/05/04 18:03:30 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(const std::string &type) : _m_type(type) {}

Weapon::~Weapon() {}

const std::string &Weapon::getType(void) const
{
	return this->_m_type;
}

void Weapon::setType(const std::string &type)
{
	this->_m_type = type;
}
