/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:46:45 by echerell          #+#    #+#             */
/*   Updated: 2022/05/08 16:26:03 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_m_name;
	bool				_m_isSigned;
	const int			_m_gradeSign;
	const int			_m_gradeExec;

	static const int	lowGrade = 150;
	static const int	highGrade = 1;

	void				checkGrades() const;
public:
	Form();
	Form(const std::string &name, int signGrade, int execGrade);
	Form(const Form &cp);
	~Form();

	Form				&operator=(const Form &asg);

	const std::string	&getName() const;
	int					getSignGrade() const;
	int					getExecGrade() const;
	bool				isSigned() const;

	bool				beSigned(const Bureaucrat &bureaucrat);

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "\033[31mThe grade is too low, cannot set\033[37m";
		}
	};

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "\033[31mThe grade is too high, cannot set\033[37m";
		}
	};
};

std::ostream	&operator<<(std::ostream &o, const Form &ins);

#endif
