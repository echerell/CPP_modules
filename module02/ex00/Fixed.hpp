/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:48:09 by echerell          #+#    #+#             */
/*   Updated: 2022/05/05 16:46:24 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					_m_fixPoint;
	static const int	_m_fracBit = 8;
public:
	Fixed();
	Fixed(const Fixed &cp);
	~Fixed();

	Fixed	&operator=(const Fixed &asg);

	int		getRawBits(void) const;
	void	setRawBits(const int raw);
};

#endif
