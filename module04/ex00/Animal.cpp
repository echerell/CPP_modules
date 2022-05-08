/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:16:06 by echerell          #+#    #+#             */
/*   Updated: 2022/05/07 18:13:27 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : m_type("unknown")
{
	std::cout << "\033[32mAnimal construtor\033[37m\n";
}

Animal::Animal(const Animal &cp)
{
	std::cout << "\033[33mAnimal copy constructor\033[37m\n";
	*this = cp;
}

Animal::~Animal()
{
	std::cout << "\033[31mAnimal destructor\033[37m\n";
}

Animal &Animal::operator=(const Animal &asg)
{
	std::cout << "\033[33mAnimal copy assignment operator\033[37m\n";
	this->m_type = asg.m_type;

	return *this;
}

void Animal::makeSound() const
{
	std::cout << m_type << " says *unknown animal sound*\n";
}

const std::string &Animal::getType() const
{
	return this->m_type;
}
