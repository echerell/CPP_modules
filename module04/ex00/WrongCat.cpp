/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 20:11:38 by echerell          #+#    #+#             */
/*   Updated: 2022/05/07 22:28:26 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "\033[32mWRongCat construtor\033[37m\n";
	m_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &cp) : WrongAnimal(cp)
{
	std::cout << "\033[33mWrongCat copy constructor\033[37m\n";
	*this = cp;
}

WrongCat::~WrongCat()
{
	std::cout << "\033[31mWrongCat destructor\033[37m\n";
}

WrongCat &WrongCat::operator=(const WrongCat &asg)
{
	std::cout << "\033[33mWrongCat copy assignment operator\033[37m\n";
	this->m_type = asg.m_type;

	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << m_type << " says *RRRAAAAAHR*\n";
}
