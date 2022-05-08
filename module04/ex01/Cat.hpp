/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:37:28 by echerell          #+#    #+#             */
/*   Updated: 2022/05/08 12:35:11 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
private:
	Brain	*_m_brain;
public:
	Cat();
	Cat(const Cat &cp);
	virtual ~Cat();

	Cat				&operator=(const Cat &asg);
	virtual AAnimal	&operator=(const AAnimal &asg);

	virtual void	makeSound() const;
	virtual Brain	*getBrain() const;
};

#endif
