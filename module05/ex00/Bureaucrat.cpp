/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:03:26 by echerell          #+#    #+#             */
/*   Updated: 2022/05/08 14:18:36 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _m_name("*unknown*"), _m_grade(Bureaucrat::lowGrade) {}

Bureaucrat::Bureaucrat(const std::string &name, int grade) :
	_m_name(name), _m_grade(grade)
{
	this->checkGrade();
}

Bureaucrat::Bureaucrat(const Bureaucrat &cp)
{
	*this = cp;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &asg)
{
	this->_m_grade = asg._m_grade;

	return *this;
}

const std::string	&Bureaucrat::getName() const
{
	return this->_m_name;
}

int					Bureaucrat::getGrade() const
{
	return this->_m_grade;
}

void				Bureaucrat::incGrade(int quantity)
{
	this->_m_grade -= quantity;
	checkGrade();
}

void				Bureaucrat::decGrade(int quantity)
{
	this->_m_grade += quantity;
	checkGrade();
}

void				Bureaucrat::checkGrade() const
{
	if (this->_m_grade < Bureaucrat::highGrade)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_m_grade > Bureaucrat::lowGrade)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream		&operator<<(std::ostream &o, const Bureaucrat &ins)
{
	o << ins.getName() << ", bureaucrat grade " << ins.getGrade();

	return o;
}
