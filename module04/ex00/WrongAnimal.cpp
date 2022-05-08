/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 20:07:41 by echerell          #+#    #+#             */
/*   Updated: 2022/05/06 20:12:35 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : m_type("WrongUnknown")
{
	std::cout << "\033[32mWrongAnimal construtor\033[37m\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &cp)
{
	std::cout << "\033[33mWrongAnimal copy constructor\033[37m\n";
	*this = cp;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "\033[31mWrongAnimal destructor\033[37m\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &asg)
{
	std::cout << "\033[33mWrongAnimal copy assignment operator\033[37m\n";
	this->m_type = asg.m_type;

	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << m_type << " says *unknown WrongAnimal sound*\n";
}

const std::string &WrongAnimal::getType() const
{
	return this->m_type;
}
