/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 00:41:18 by echerell          #+#    #+#             */
/*   Updated: 2022/05/10 10:20:41 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>
#include <cstdlib>

int	main()
{
	std::cout << "\033[32m__SUBJECT_TEST__\033[37m\n";
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "\033[32m__TEST_1__\033[37m\n" << "Attempt to span with one or no elements\n";
	try
	{
		Span	empty;

		empty.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Span	one(1);

		one.addNumber(42);
		one.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\033[32m__TEST_2__\033[37m\n" << "Attempt to add number in the full span\n";

	try
	{
		Span	span(5);

		span.addNumber(42);
		span.addNumber(1);
		span.addNumber(3);
		span.addNumber(17);
		span.addNumber(60);
		span.addNumber(21);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\033[32m__TEST_3__\033[37m\n" << "Attempt to add range of numbers in the span, which size is less than range size\n";

	try
	{
		Span				span(5);
		std::vector<int>	vec;

		vec.push_back(1);
		vec.push_back(2);
		vec.push_back(3);
		vec.push_back(4);
		vec.push_back(5);
		vec.push_back(6);

		span.addNumber(42);
		span.addNumber(21);

		span.addNumber(vec.begin(), vec.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\033[32m__TEST_4__\033[37m\n" << "10000 numbers span\n";

	Span	span(10000);

	std::srand(std::time(0));
	for (int i = 0; i < 10000; i++)
		span.addNumber(std::rand());

	std::cout << span.shortestSpan() << std::endl;
	std::cout << span.longestSpan() << std::endl;

	return 0;
}
