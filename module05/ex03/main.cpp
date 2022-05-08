/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:19:01 by echerell          #+#    #+#             */
/*   Updated: 2022/05/08 20:14:37 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main()
{
	Intern		formMaker;
	Bureaucrat	rick("Rick", 1);
	AForm		*form;

	form = formMaker.makeForm("none", "what");

	form = formMaker.makeForm("shrubbery creation", "garden");
	delete form;

	form = formMaker.makeForm("presidential pardon", "Magni");
	delete form;

	form = formMaker.makeForm("robotomy request", "Bender");
	rick.signForm(*form);
	rick.executeForm(*form);
	std::cout << *form;

	delete form;

	return 0;
}
