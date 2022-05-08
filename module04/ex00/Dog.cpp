/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:27:51 by echerell          #+#    #+#             */
/*   Updated: 2022/05/07 22:28:51 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "\033[32mDog construtor\033[37m\n";
	m_type = "Dog";
}

Dog::Dog(const Dog &cp) : Animal(cp)
{
	std::cout << "\033[33mDogcopy constructor\033[37m\n";
	*this = cp;
}

Dog::~Dog()
{
	std::cout << "\033[31mDog destructor\033[37m\n";
}

Dog &Dog::operator=(const Dog &asg)
{
	std::cout << "\033[33mDog copy assignment operator\033[37m\n";
	this->m_type = asg.m_type;

	return *this;
}

void Dog::makeSound() const
{
	std::cout << m_type << " says *woof*\n";
}
