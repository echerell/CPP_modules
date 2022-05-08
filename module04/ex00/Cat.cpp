/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:38:41 by echerell          #+#    #+#             */
/*   Updated: 2022/05/07 22:28:43 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "\033[32mCat construtor\033[37m\n";
	m_type = "Cat";
}

Cat::Cat(const Cat &cp) : Animal(cp)
{
	std::cout << "\033[33mCat copy constructor\033[37m\n";
	*this = cp;
}

Cat::~Cat()
{
	std::cout << "\033[31mCat destructor\033[37m\n";
}

Cat &Cat::operator=(const Cat &asg)
{
	std::cout << "\033[33mCat copy assignment operator\033[37m\n";
	this->m_type = asg.m_type;

	return *this;
}

void Cat::makeSound() const
{
	std::cout << m_type << " says *meow*\n";
}
