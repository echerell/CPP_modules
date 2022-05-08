/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 17:51:14 by echerell          #+#    #+#             */
/*   Updated: 2022/05/08 18:16:39 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
	AForm("PresidentialPardonForm", 25, 5), _m_target("*unknown*") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
	AForm("PresidentialPardonForm", 25, 5), _m_target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cp) :
	AForm("PresidentialPardonForm", 25, 5), _m_target(cp.getTarget())
{
	*this = cp;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &asg)
{
	asg.getExecGrade();
	return *this;
}

const std::string		&PresidentialPardonForm::getTarget() const
{
	return this->_m_target;
}

void					PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	this->checkExecute(executor);
	std::cout << this->_m_target << " has been pardoned by Zaphod Beeblebrox\n";
}
