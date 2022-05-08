/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:19:01 by echerell          #+#    #+#             */
/*   Updated: 2022/05/08 18:24:11 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	std::srand(std::time(0));
	std::cout << "\033[32m____SHRUBBERY_FORM____\033[37m\n";

	try
	{
		std::cout << "__TEST_1.1__\n" << "*Bureaucrat can sign, but cannot execute the form*\n";

		Bureaucrat				rick("Rick", 140);
		ShrubberyCreationForm	form("garden");

		std::cout << rick << std::endl;
		std::cout << form << std::endl;
		rick.signForm(form);
		std::cout << form << std::endl;
		rick.executeForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "__TEST_1.2__\n" << "*Bureaucrat can sign and execute the form*\n";

		Bureaucrat				karl("Karl", 130);
		ShrubberyCreationForm	form("garden");

		std::cout << karl << std::endl;
		std::cout << form << std::endl;
		karl.signForm(form);
		std::cout << form << std::endl;
		karl.executeForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\033[32m____ROBOTOMY_FORM____\033[37m\n";

	try
	{
		std::cout << "__TEST_2.1__\n" << "*Bureaucrat can sign, but cannot execute the form*\n";

		Bureaucrat			daryl("Daryl", 70);
		RobotomyRequestForm	form("robo");

		std::cout << daryl << std::endl;
		std::cout << form << std::endl;
		daryl.signForm(form);
		std::cout << form << std::endl;
		daryl.executeForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "__TEST_2.2__\n" << "*Bureaucrat can sign and execute the form*\n";

		Bureaucrat			carol("Carol", 40);
		RobotomyRequestForm	form("robo");

		std::cout << carol << std::endl;
		std::cout << form << std::endl;
		carol.signForm(form);
		std::cout << form << std::endl;
		carol.executeForm(form);
		carol.executeForm(form);
		carol.executeForm(form);
		carol.executeForm(form);
		carol.executeForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\033[32m____PRESIDENTIAL_FORM____\033[37m\n";

	try
	{
		std::cout << "__TEST_3.1__\n" << "*Bureaucrat can sign, but cannot execute the form*\n";

		Bureaucrat				glenn("Glenn", 20);
		PresidentialPardonForm	form("Magni");

		std::cout << glenn << std::endl;
		std::cout << form << std::endl;
		glenn.signForm(form);
		std::cout << form << std::endl;
		glenn.executeForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "__TEST_3.2__\n" << "*Bureaucrat can sign and execute the form*\n";

		Bureaucrat				maggie("Maggie", 1);
		PresidentialPardonForm	form("Magni");

		std::cout << maggie << std::endl;
		std::cout << form << std::endl;
		maggie.signForm(form);
		std::cout << form << std::endl;
		maggie.executeForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


	return 0;
}
