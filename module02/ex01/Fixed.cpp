/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:45:20 by echerell          #+#    #+#             */
/*   Updated: 2022/05/05 18:32:43 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _m_fixPoint(0)
{
	std::cout << "\033[32mDefault constructor called\033[37m\n";
}

Fixed::Fixed(const int num)
{
	std::cout << "\033[32mInt constructor called\033[37m\n";
	this->_m_fixPoint = num << Fixed::_m_fracBit;
}

Fixed::Fixed(const float num)
{
	std::cout << "\033[32mFloat constructor called\033[37m\n";
	this->_m_fixPoint = roundf(num * (1 << Fixed::_m_fracBit));
}

Fixed::Fixed(const Fixed &cp)
{
	std::cout << "\033[33mCopy constructor called\033[37m\n";
	*this = cp;
}

Fixed::~Fixed()
{
	std::cout << "\033[31mDestructor called\033[37m\n";
}

Fixed &Fixed::operator=(const Fixed &asg)
{
	std::cout << "\033[33mCopy assignment operator called\033[37m\n";
	this->_m_fixPoint = asg.getRawBits();

	return *this;
}

int Fixed::getRawBits(void) const
{
	//std::cout << "\033[36mgetRawBits member function called\033[37m\n";

	return this->_m_fixPoint;
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "\033[36msetRawBits member function called\033[37m\n";
	this->_m_fixPoint = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_m_fixPoint / (float)(1 << Fixed::_m_fracBit));
}

int Fixed::toInt(void) const
{
	return (this->_m_fixPoint >> Fixed::_m_fracBit);
}

std::ostream &operator<<(std::ostream &o, const Fixed &inc)
{
	o << inc.toFloat();

	return o;
}
