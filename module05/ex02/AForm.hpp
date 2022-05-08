/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:46:45 by echerell          #+#    #+#             */
/*   Updated: 2022/05/08 17:20:11 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string	_m_name;
	bool				_m_isSigned;
	const int			_m_gradeSign;
	const int			_m_gradeExec;

	static const int	lowGrade = 150;
	static const int	highGrade = 1;

	void				checkGrades() const;
protected:
	void				checkExecute(const Bureaucrat &executor) const;
public:
	AForm();
	AForm(const std::string &name, int signGrade, int execGrade);
	AForm(const AForm &cp);
	virtual ~AForm();

	AForm				&operator=(const AForm &asg);

	const std::string	&getName() const;
	int					getSignGrade() const;
	int					getExecGrade() const;
	bool				isSigned() const;

	bool				beSigned(const Bureaucrat &bureaucrat);
	virtual void		execute(const Bureaucrat &executor) const = 0;

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

	class CannotExecuteForm: public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "\033[31mForm cannot be executed. No signed form or executor grade is too low\033[37m";
		}
	};
};

std::ostream	&operator<<(std::ostream &o, const AForm &ins);

#endif
