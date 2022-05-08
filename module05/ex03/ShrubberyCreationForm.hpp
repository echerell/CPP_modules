/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 16:58:27 by echerell          #+#    #+#             */
/*   Updated: 2022/05/08 17:12:21 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm
{
private:
	const std::string	_m_target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &cp);
	~ShrubberyCreationForm();

	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &asg);

	const std::string		&getTarget() const;
	virtual void			execute(const Bureaucrat &executor) const;
};

#endif
