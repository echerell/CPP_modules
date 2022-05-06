/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:12:01 by echerell          #+#    #+#             */
/*   Updated: 2022/05/06 14:02:56 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	std::cout << "________________SUBJECT_TESTS________________\n";
	//subject tests
	Fixed	sa;
	Fixed	sb(Fixed(5.05f) * Fixed(2));

	std::cout << sa << std::endl;
	std::cout << ++sa << std::endl;
	std::cout << sa << std::endl;
	std::cout << sa++ << std::endl;
	std::cout << sa << std::endl;

	std::cout << sb << std::endl;

	std::cout << Fixed::max( sa, sb ) << std::endl;

	std::cout << "________________MY_TESTS________________\n";
	// my tests
	Fixed	a(10);
	Fixed	b(11);
	Fixed	c(10.05f);

	a < b ? std::cout << "OK\n" : std::cout << "KO\n";
	c > a ? std::cout << "OK\n" : std::cout << "KO\n";
	b >= c ? std::cout << "OK\n" : std::cout << "KO\n";

	a = Fixed(11);

	a == b ? std::cout << "OK\n" : std::cout << "KO\n";
	a != c ? std::cout << "OK\n" : std::cout << "KO\n";

	Fixed d = a + c;
	std::cout << a << " + " << c << " = " << d << std::endl;

	b = a - c;
	std::cout << a << " - " << c << " = " << b << std::endl;

	d = a * c;
	std::cout << a << " * " << c << " = " << d << std::endl;

	b = c / a;
	std::cout << c << " / " << a << " = " << b << std::endl;

	std::cout << "orig " << c << " prefix++ " << ++c << std::endl;
	std::cout << "result: " << c << std::endl;
	std::cout << "orig " << c << " postfix++ " << c++ << std::endl;
	std::cout << "result: " << c << std::endl;

	std::cout << "orig " << c << " prefix-- " << --c << std::endl;
	std::cout << "result: " << c << std::endl;
	std::cout << "orig " << c << " postfix-- " << c-- << std::endl;
	std::cout << "result: " << c << std::endl;

	a = Fixed(10);
	c = Fixed(10.05f);

	std::cout << "max between " << a << " and " << c << " is " << Fixed::max(a, c) << std::endl;
	std::cout << "min between " << a << " and " << c << " is " << Fixed::min(a, c) << std::endl;

	const Fixed	aa(10);
	const Fixed	cc(10.05f);

	std::cout << "max between const " << aa << " and const " << cc << " is " << Fixed::max(aa, cc) << std::endl;
	std::cout << "min between const " << aa << " and const " << cc << " is " << Fixed::min(aa, cc) << std::endl;

	return 0;
}
