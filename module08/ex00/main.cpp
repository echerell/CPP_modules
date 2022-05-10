/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 23:14:02 by echerell          #+#    #+#             */
/*   Updated: 2022/05/09 23:26:32 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <set>

int	main()
{
	std::cout << "\033[32m__LIST_TEST__SUCCESS__\033[37m\n";

	try
	{
		std::list<int>				cont;
		std::list<int>::iterator	it;

		for (int i = 0; i < 5; i++)
			cont.push_back(i);
		it = easyfind(cont, 3);
		std::cout << "found value: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\033[32m__VECTOR_TEST__FAILURE__\033[37m\n";

	try
	{
		std::vector<int>			cont;
		std::vector<int>::iterator	it;

		for (int i = 0; i < 5; i++)
			cont.push_back(i);
		it = easyfind(cont, 42);
		std::cout << "found value: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\033[32m__SET_TEST__SUCCESS__\033[37m\n";

	try
	{
		std::set<int>			cont;
		std::set<int>::iterator	it;

		for (int i = 0; i < 5; i++)
			cont.insert(i);
		it = easyfind(cont, 1);
		std::cout << "found value: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
