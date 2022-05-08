/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 17:09:40 by echerell          #+#    #+#             */
/*   Updated: 2022/05/08 17:10:23 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
private:
	const std::string	_m_target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &cp);
	~PresidentialPardonForm();

	PresidentialPardonForm	&operator=(const PresidentialPardonForm &asg);

	const std::string		&getTarget() const;
	virtual void			execute(const Bureaucrat &executor) const;
};

#endif
