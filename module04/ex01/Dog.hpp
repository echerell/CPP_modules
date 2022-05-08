/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:25:10 by echerell          #+#    #+#             */
/*   Updated: 2022/05/08 12:38:13 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
private:
	Brain	*_m_brain;
public:
	Dog();
	Dog(const Dog &cp);
	virtual ~Dog();

	Dog 			&operator=(const Dog &asg);
	virtual AAnimal	&operator=(const AAnimal &asg);

	virtual void	makeSound() const;
	virtual Brain	*getBrain() const;
};

#endif
