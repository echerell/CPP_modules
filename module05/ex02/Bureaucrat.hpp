/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 13:53:52 by echerell          #+#    #+#             */
/*   Updated: 2022/05/08 16:44:21 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
	const std::string	_m_name;
	int					_m_grade;

	static const int	lowGrade = 150;
	static const int	highGrade = 1;

	void				checkGrade() const;
public:
	Bureaucrat();
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &cp);
	~Bureaucrat();

	Bureaucrat			&operator=(const Bureaucrat &asg);

	const std::string	&getName() const;
	int					getGrade() const;

	void				incGrade(int quantity);
	void				decGrade(int quantity);

	void				signForm(AForm &form) const;
	void				executeForm(const AForm &form) const;

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

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &ins);

#endif
