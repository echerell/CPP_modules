/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:16:06 by echerell          #+#    #+#             */
/*   Updated: 2022/05/07 23:18:29 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : m_type("unknown")
{
	std::cout << "\033[32mAnimal construtor\033[37m\n";
}

AAnimal::AAnimal(const AAnimal &cp)
{
	std::cout << "\033[33mAnimal copy constructor\033[37m\n";
	*this = cp;
}

AAnimal::~AAnimal()
{
	std::cout << "\033[31mAnimal destructor\033[37m\n";
}

AAnimal &AAnimal::operator=(const AAnimal &asg)
{
	std::cout << "\033[33mAnimal copy assignment operator\033[37m\n";
	this->m_type = asg.m_type;

	return *this;
}

void AAnimal::makeSound() const
{
	std::cout << m_type << " says *unknown animal sound*\n";
}

const std::string &AAnimal::getType() const
{
	return this->m_type;
}
