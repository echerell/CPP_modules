/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 20:06:52 by echerell          #+#    #+#             */
/*   Updated: 2022/05/07 18:23:36 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal
{
protected:
	std::string	m_type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &cp);
	virtual ~WrongAnimal();

	WrongAnimal			&operator=(const WrongAnimal &asg);

	void				makeSound() const;
	const std::string	&getType() const;
};

#endif
