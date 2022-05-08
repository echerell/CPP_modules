/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 17:06:16 by echerell          #+#    #+#             */
/*   Updated: 2022/05/08 17:44:35 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <cstdlib>
# include <ctime>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
private:
	const std::string	_m_target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &cp);
	~RobotomyRequestForm();

	RobotomyRequestForm	&operator=(const RobotomyRequestForm &asg);

	const std::string		&getTarget() const;
	virtual void			execute(const Bureaucrat &executor) const;
};

#endif
