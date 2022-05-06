/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:48:09 by echerell          #+#    #+#             */
/*   Updated: 2022/05/06 14:14:39 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					_m_fixPoint;
	static const int	_m_fracBit = 8;
public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed &cp);
	~Fixed();

	Fixed	&operator=(const Fixed &asg);
	bool	operator>(const Fixed &cmp) const;
	bool	operator<(const Fixed &cmp) const;
	bool	operator>=(const Fixed &cmp) const;
	bool	operator<=(const Fixed &cmp) const;
	bool	operator==(const Fixed &cmp) const;
	bool	operator!=(const Fixed &cmp) const;
	Fixed	operator+(const Fixed &add) const;
	Fixed	operator-(const Fixed &sub) const;
	Fixed	operator*(const Fixed &mul) const;
	Fixed	operator/(const Fixed &div) const;
	Fixed	&operator++(void);
	Fixed	operator++(int);
	Fixed	&operator--(void);
	Fixed	operator--(int);

	int		getRawBits(void) const;
	void	setRawBits(const int raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed		&min(Fixed &lhs, Fixed &rhs);
	static const Fixed	&min(const Fixed &lhs, const Fixed &rhs);
	static Fixed		&max(Fixed &lhs, Fixed &rhs);
	static const Fixed	&max(const Fixed &lhs, const Fixed &rhs);
};

std::ostream	&operator<<(std::ostream &o, const Fixed &inc);

#endif
