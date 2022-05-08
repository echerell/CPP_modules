/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:19:01 by echerell          #+#    #+#             */
/*   Updated: 2022/05/08 14:37:07 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		std::cout << "__TEST1__\n" << "*Too high grade when class defined*\n";

		Bureaucrat	rick("Rick", 0);
		std::cout << rick << std::endl;
		rick.incGrade(10);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "__TEST2__\n" << "*Too low grade when class defined*\n";

		Bureaucrat	carl("Carl", 151);
		std::cout << carl << std::endl;
		carl.decGrade(10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "__TEST3__\n" << "*Attempt to increment the highest grade*\n";

		Bureaucrat	daryl("Daryl", 1);
		std::cout << daryl << std::endl;
		daryl.decGrade(3);
		std::cout << daryl << std::endl;
		daryl.incGrade(3);
		std::cout << daryl << std::endl;
		daryl.incGrade(1);
		std::cout << daryl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "__TEST4__\n" << "*Attempt to decrement the lowest grade*\n";

		Bureaucrat	carol("Carol", 150);
		std::cout << carol << std::endl;
		carol.incGrade(4);
		std::cout << carol << std::endl;
		carol.decGrade(4);
		std::cout << carol << std::endl;
		carol.decGrade(1);
		std::cout << carol << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
