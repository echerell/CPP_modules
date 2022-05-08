/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:11:24 by echerell          #+#    #+#             */
/*   Updated: 2022/05/08 12:34:35 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>
# include "Brain.hpp"

class AAnimal
{
protected:
	std::string	m_type;
public:
	AAnimal();
	AAnimal(const AAnimal &cp);
	virtual ~AAnimal();

	virtual AAnimal		&operator=(const AAnimal &asg);

	virtual void		makeSound() const;
	const std::string	&getType() const;
	virtual Brain		*getBrain() const = 0;
};

#endif
