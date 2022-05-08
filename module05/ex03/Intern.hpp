/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 18:53:21 by echerell          #+#    #+#             */
/*   Updated: 2022/05/08 20:34:55 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERNT_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
private:
	AForm	*createShrubberyForm(const std::string &target) const;
	AForm	*createRobotomyForm(const std::string &target) const;
	AForm	*createPresidentialForm(const std::string &target) const;

public:
	Intern();
	Intern(const Intern &cp);
	~Intern();

	Intern	&operator=(const Intern &asg);

	AForm	*makeForm(const std::string &formname, const std::string &target) const;
};

#endif
