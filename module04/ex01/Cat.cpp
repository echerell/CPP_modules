/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:38:41 by echerell          #+#    #+#             */
/*   Updated: 2022/05/08 13:06:00 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "\033[32mCat construtor\033[37m\n";
	this->_m_brain = new Brain();
	this->m_type = "Cat";
}

Cat::Cat(const Cat &cp) : AAnimal(cp)
{
	std::cout << "\033[33mCat copy constructor\033[37m\n";
	this->_m_brain = new Brain();
	*this = cp;
}

Cat::~Cat()
{
	std::cout << "\033[31mCat destructor\033[37m\n";
	delete this->_m_brain;
}

Cat &Cat::operator=(const Cat &asg)
{
	std::cout << "\033[33mCat copy assignment operator\033[37m\n";
	this->m_type = asg.m_type;
	*(this->_m_brain) = *(asg.getBrain());

	return *this;
}

AAnimal &Cat::operator=(const AAnimal &asg)
{
	std::cout << "\033[33mAnimal copy assignment operator in Cat class\033[37m\n";
	this->m_type = asg.getType();
	*(this->_m_brain) = *(asg.getBrain());

	return *this;
}

void Cat::makeSound() const
{
	std::cout << m_type << " says *meow*\n";
}

Brain *Cat::getBrain() const
{
	return this->_m_brain;
}
