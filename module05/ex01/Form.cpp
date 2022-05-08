/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 15:14:23 by echerell          #+#    #+#             */
/*   Updated: 2022/05/08 16:26:55 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _m_name("*unknown*"), _m_isSigned(false),
	_m_gradeSign(Form::lowGrade), _m_gradeExec(Form::lowGrade) {}

Form::Form(const std::string &name, int signGrade, int execGrade) :
	_m_name(name), _m_isSigned(false), _m_gradeSign(signGrade),
	_m_gradeExec(execGrade)
{
	this->checkGrades();
}

Form::Form(const Form &cp) : _m_name(cp.getName()), _m_isSigned(cp.isSigned()),
	_m_gradeSign(cp.getSignGrade()), _m_gradeExec(cp.getExecGrade())
{
	*this = cp;
}

Form::~Form() {}

Form				&Form::operator=(const Form &asg)
{
	this->_m_isSigned = asg._m_isSigned;

	return *this;
}

const std::string	&Form::getName() const
{
	return this->_m_name;
}

int					Form::getSignGrade() const
{
	return this->_m_gradeSign;
}

int					Form::getExecGrade() const
{
	return this->_m_gradeExec;
}

bool				Form::isSigned() const
{
	return _m_isSigned;
}

bool				Form::beSigned(const Bureaucrat &bureaucrat)
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

void				Form::checkGrades() const
{
	if (this->_m_gradeExec < Form::highGrade
		|| this->_m_gradeSign < Form::highGrade)
		throw Form::GradeTooHighException();
	else if (this->_m_gradeExec > Form::lowGrade
		|| this->_m_gradeSign > Form::lowGrade)
		throw Form::GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &o, const Form &ins)
{
	o << "Form " << ins.getName() << " has a " << ins.getSignGrade()
		<< " sign grade and " << ins.getExecGrade() << " execute grade\n"
		<< "It is " << (ins.isSigned() ? "" : "not ") << "signed\n";

	return o;
}
