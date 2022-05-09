/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:31:48 by echerell          #+#    #+#             */
/*   Updated: 2022/05/09 15:55:55 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdexcept>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate()
{
	int	gen = rand() % 3;

	if (!gen)
		return new A();
	else if (gen == 1)
		return new B();
	else if (gen == 2)
		return new C();
	return NULL;
}

void	identify(Base *p)
{
	A	*a;
	B	*b;
	C	*c;

	if ((a = dynamic_cast<A *>(p)))
		std::cout << "A\n";
	else if ((b = dynamic_cast<B *>(p)))
		std::cout << "B\n";
	else if ((c = dynamic_cast<C *>(p)))
		std::cout << "C\n";
	else
		std::cout << "Conversation is not OK, got NULL\n";
}

void	identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

}

int		main()
{
	Base	*instance;

	srand(time(0));

	std::cout << "\033[32m__POINTERS_TESTS__\033[37m\n";

	instance = generate();
	identify(instance);
	delete instance;

	instance = generate();
	identify(instance);
	delete instance;

	instance = generate();
	identify(instance);
	delete instance;

	instance = generate();
	identify(instance);
	delete instance;

	std::cout << "\033[32m_NULL_TEST_\033[37m\n";

	instance = NULL;
	identify(instance);

	std::cout <<"\033[32m__REFERENCES_TESTS__\033[37m\n";

	instance = generate();
	identify(*instance);
	delete instance;
	std::cout << std::endl;

	instance = generate();
	identify(*instance);
	delete instance;
	std::cout << std::endl;

	instance = generate();
	identify(*instance);
	delete instance;
	std::cout << std::endl;

	instance = generate();
	identify(*instance);
	delete instance;
	std::cout << std::endl;

	return 0;
}
