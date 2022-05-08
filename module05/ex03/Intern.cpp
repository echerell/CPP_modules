/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 19:48:46 by echerell          #+#    #+#             */
/*   Updated: 2022/05/08 20:41:08 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &cp)
{
	*this = cp;
}

Intern::~Intern() {}

Intern	&Intern::operator=(const Intern &asg)
{
	(void)asg;

	return *this;
}

AForm	*Intern::makeForm(const std::string &formname, const std::string &target) const
{
	AForm *(Intern::*funcPtr[3]) (const std::string &target) const =
	{
		&Intern::createShrubberyForm,
		&Intern::createRobotomyForm,
		&Intern::createPresidentialForm
	};
	std::string formnames[3] =
	{
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	for (int i = 0; i < 3; i++)
	{
		AForm *(Intern::*res) (const std::string &target) const = funcPtr[i];
		if (formname == formnames[i])
		{
			std::cout << "Intern creates " << formname << std::endl;
			return (this->*res)(target);
		}
	}
	std::cout << "Intern did not find the form " << formname << std::endl;
	return NULL;
}

AForm	*Intern::createShrubberyForm(const std::string &target) const
{
	return (new ShrubberyCreationForm(target));
}

AForm	*Intern::createRobotomyForm(const std::string &target) const
{
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::createPresidentialForm(const std::string &target) const
{
	return (new PresidentialPardonForm(target));
}
