/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:11:24 by echerell          #+#    #+#             */
/*   Updated: 2022/05/06 21:49:40 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
protected:
	std::string	m_type;
public:
	Animal();
	Animal(const Animal &cp);
	virtual ~Animal();

	Animal				&operator=(const Animal &asg);

	virtual void		makeSound() const;
	const std::string	&getType() const;
};

#endif
