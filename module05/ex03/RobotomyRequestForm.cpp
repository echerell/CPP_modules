/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 17:29:03 by echerell          #+#    #+#             */
/*   Updated: 2022/05/08 18:24:09 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
	AForm("RobotomyRequestForm", 72, 42), _m_target("*unknown*") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
	AForm("RobotomyRequestForm", 72, 42), _m_target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cp) :
	AForm("RobotomyRequestForm", 72, 42), _m_target(cp.getTarget())
{
	*this = cp;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &asg)
{
	asg.getExecGrade();
	return *this;
}

const std::string		&RobotomyRequestForm::getTarget() const
{
	return this->_m_target;
}

void					RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	this->checkExecute(executor);
	std::cout << "Strange drilling noises...\n";
	if (std::rand() % 2)
		std::cout << "The target " << this->_m_target << " has been robotomized successfully\n";
	else
		std::cout << "Unfortunately, " << this->_m_target << " has not been robotomized\n";
}
