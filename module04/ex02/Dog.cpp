/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:27:51 by echerell          #+#    #+#             */
/*   Updated: 2022/05/08 12:56:57 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "\033[32mDog construtor\033[37m\n";
	this->_m_brain = new Brain();
	this->m_type = "Dog";
}

Dog::Dog(const Dog &cp) : AAnimal(cp)
{
	std::cout << "\033[33mDogcopy constructor\033[37m\n";
	this->_m_brain = new Brain();
	*this = cp;
}

Dog::~Dog()
{
	std::cout << "\033[31mDog destructor\033[37m\n";
	delete this->_m_brain;
}

Dog &Dog::operator=(const Dog &asg)
{
	std::cout << "\033[33mDog copy assignment operator\033[37m\n";
	this->m_type = asg.m_type;
	*(this->_m_brain) = *(asg.getBrain());

	return *this;
}

AAnimal &Dog::operator=(const AAnimal &asg)
{
	std::cout << "\033[33mAnimal copy assignment operator in Dog class\033[37m\n";
	this->m_type = asg.getType();
	*(this->_m_brain) = *(asg.getBrain());

	return *this;
}

void Dog::makeSound() const
{
	std::cout << m_type << " says *woof*\n";
}

Brain *Dog::getBrain() const
{
	return this->_m_brain;
}
