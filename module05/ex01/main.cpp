/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:19:01 by echerell          #+#    #+#             */
/*   Updated: 2022/05/08 16:23:25 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	try
	{
		std::cout << "__TEST1__\n" << "*Too high sign grade when class defined*\n";

		Form	f("A42", 0, 10);

		std::cout << f << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "__TEST2__\n" << "*Too low sign grade when class defined*\n";

		Form	f("A42", 151, 10);

		std::cout << f << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "__TEST3__\n" << "*Too high exec grade when class defined*\n";

		Form	f("A42", 10, 0);

		std::cout << f << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "__TEST4__\n" << "*Too low exec grade when class defined*\n";

		Form	f("A42", 10, 151);

		std::cout << f << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "__TEST5__\n" << "*Right form, correct bureaucrat's grade*\n";

		Bureaucrat	rick("Rick", 1);
		Form		f("A42", 42, 42);

		std::cout << f << std::endl;
		rick.signForm(f);
		std::cout << f << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "__TEST5__\n" << "*Right form, incorrect bureaucrat's grade*\n";

		Bureaucrat	rick("Rick", 150);
		Form		f("A42", 42, 42);

		std::cout << f << std::endl;
		rick.signForm(f);
		std::cout << f << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
