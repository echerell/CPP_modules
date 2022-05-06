/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:45:20 by echerell          #+#    #+#             */
/*   Updated: 2022/05/06 13:59:11 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _m_fixPoint(0)
{
	//std::cout << "\033[32mDefault constructor called\033[37m\n";
}

Fixed::Fixed(const int num)
{
	//std::cout << "\033[32mInt constructor called\033[37m\n";
	this->_m_fixPoint = num << Fixed::_m_fracBit;
}

Fixed::Fixed(const float num)
{
	//std::cout << "\033[32mFloat constructor called\033[37m\n";
	this->_m_fixPoint = roundf(num * (1 << Fixed::_m_fracBit));
}

Fixed::Fixed(const Fixed &cp)
{
	//std::cout << "\033[33mCopy constructor called\033[37m\n";
	*this = cp;
}

Fixed::~Fixed()
{
	//std::cout << "\033[31mDestructor called\033[37m\n";
}

Fixed &Fixed::operator=(const Fixed &asg)
{
	//std::cout << "\033[33mCopy assignment operator called\033[37m\n";
	this->_m_fixPoint = asg.getRawBits();

	return *this;
}

bool Fixed::operator>(const Fixed &cmp) const
{
	//std::cout << "\033[35mOperator > called\033[37m\n";

	return (this->getRawBits() > cmp.getRawBits());
}

bool Fixed::operator<(const Fixed &cmp) const
{
	//std::cout << "\033[35mOperator < called\033[37m\n";

	return (this->getRawBits() < cmp.getRawBits());
}

bool Fixed::operator>=(const Fixed &cmp) const
{
	//std::cout << "\033[35mOperator >= called\033[37m\n";

	return (this->getRawBits() >= cmp.getRawBits());
}

bool Fixed::operator<=(const Fixed &cmp) const
{
	//std::cout << "\033[35mOperator <= called\033[37m\n";

	return (this->getRawBits() <= cmp.getRawBits());
}

bool Fixed::operator==(const Fixed &cmp) const
{
	//std::cout << "\033[35mOperator == called\033[37m\n";

	return (this->getRawBits() == cmp.getRawBits());
}

bool Fixed::operator!=(const Fixed &cmp) const
{
	//std::cout << "\033[35mOperator != called\033[37m\n";

	return (this->getRawBits() != cmp.getRawBits());
}

Fixed Fixed::operator+(const Fixed &add) const
{
	//std::cout << "\033[35mOperator + called\033[37m\n";
	Fixed	res;

	res.setRawBits(this->getRawBits() + add.getRawBits());

	return res;
}

Fixed Fixed::operator-(const Fixed &sub) const
{
	//std::cout << "\033[35mOperator - called\033[37m\n";
	Fixed	res;

	res.setRawBits(this->getRawBits() - sub.getRawBits());

	return res;
}

Fixed Fixed::operator*(const Fixed &mul) const
{
	//std::cout << "\033[35mOperator * called\033[37m\n";
	Fixed	res(this->toFloat() * mul.toFloat());

	return res;
}

Fixed Fixed::operator/(const Fixed &div) const
{
	//std::cout << "\033[35mOperator / called\033[37m\n";
	Fixed	res(this->toFloat() / div.toFloat());

	return res;
}

Fixed &Fixed::operator++(void)
{
	//std::cout << "\033[35mOperator prefix ++ called\033[37m\n";
	this->_m_fixPoint++;

	return *this;
}

Fixed Fixed::operator++(int)
{
	//std::cout << "\033[35mOperator postfix ++ called\033[37m\n";
	Fixed	tmp = *this;

	++*this;

	return tmp;
}

Fixed &Fixed::operator--(void)
{
	//std::cout << "\033[35mOperator prefix-- called\033[37m\n";
	this->_m_fixPoint--;

	return *this;
}

Fixed Fixed::operator--(int)
{
	//std::cout << "\033[35mOperator postfix -- called\033[37m\n";
	Fixed	tmp = *this;

	--*this;

	return tmp;
}

Fixed &Fixed::min(Fixed &lhs, Fixed &rhs)
{
	//std::cout << "\033[35mMin called\033[37m\n";
	if (lhs < rhs)
		return lhs;
	else
		return rhs;
}

const Fixed &Fixed::min(const Fixed &lhs, const Fixed &rhs)
{
	//std::cout << "\033[35mConst min called\033[37m\n";
	if (lhs < rhs)
		return lhs;
	else
		return rhs;
}

Fixed &Fixed::max(Fixed &lhs, Fixed &rhs)
{
	//std::cout << "\033[35mMax called\033[37m\n";
	if (lhs > rhs)
		return lhs;
	else
		return rhs;
}

const Fixed &Fixed::max(const Fixed &lhs, const Fixed &rhs)
{
	//std::cout << "\033[35mConst max called\033[37m\n";
	if (lhs > rhs)
		return lhs;
	else
		return rhs;
}

int Fixed::getRawBits(void) const
{
	//std::cout << "\033[36mgetRawBits member function called\033[37m\n";

	return this->_m_fixPoint;
}

void Fixed::setRawBits(const int raw)
{
	//std::cout << "\033[36msetRawBits member function called\033[37m\n";
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
