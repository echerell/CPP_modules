/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 15:14:23 by echerell          #+#    #+#             */
/*   Updated: 2022/05/08 16:57:19 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _m_name("*unknown*"), _m_isSigned(false),
	_m_gradeSign(AForm::lowGrade), _m_gradeExec(AForm::lowGrade) {}

AForm::AForm(const std::string &name, int signGrade, int execGrade) :
	_m_name(name), _m_isSigned(false), _m_gradeSign(signGrade),
	_m_gradeExec(execGrade)
{
	this->checkGrades();
}

AForm::AForm(const AForm &cp) : _m_name(cp.getName()), _m_isSigned(cp.isSigned()),
	_m_gradeSign(cp.getSignGrade()), _m_gradeExec(cp.getExecGrade())
{
	*this = cp;
}

AForm::~AForm() {}

AForm				&AForm::operator=(const AForm &asg)
{
	this->_m_isSigned = asg._m_isSigned;

	return *this;
}

const std::string	&AForm::getName() const
{
	return this->_m_name;
}

int					AForm::getSignGrade() const
{
	return this->_m_gradeSign;
}

int					AForm::getExecGrade() const
{
	return this->_m_gradeExec;
}

bool				AForm::isSigned() const
{
	return _m_isSigned;
}

bool				AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() < this->_m_gradeSign)
	{
		this->_m_isSigned = true;
		return true;
	}
	else
	{
		this->_m_isSigned = false;
		return false;
	}
}

void				AForm::checkGrades() const
{
	if (this->_m_gradeExec < AForm::highGrade
		|| this->_m_gradeSign < AForm::highGrade)
		throw AForm::GradeTooHighException();
	else if (this->_m_gradeExec > AForm::lowGrade
		|| this->_m_gradeSign > AForm::lowGrade)
		throw AForm::GradeTooLowException();
}

void				AForm::checkExecute(const Bureaucrat &executor) const
{
	if (!this->_m_isSigned || this->_m_gradeExec < executor.getGrade())
		throw AForm::CannotExecuteForm();
}

std::ostream	&operator<<(std::ostream &o, const AForm &ins)
{
	o << "Form " << ins.getName() << " has a " << ins.getSignGrade()
		<< " sign grade and " << ins.getExecGrade() << " execute grade\n"
		<< "It is " << (ins.isSigned() ? "" : "not ") << "signed\n";

	return o;
}
