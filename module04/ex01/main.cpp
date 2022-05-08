/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 22:47:50 by echerell          #+#    #+#             */
/*   Updated: 2022/05/08 13:14:01 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{
	AAnimal	*animals[10];
	Brain	*brain;

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
		std::cout << animals[i]->getType() << std::endl;
	}

	brain = animals[2]->getBrain();
	brain->m_ideas[0] = "Idea 1";
	brain->m_ideas[1] = "Where to sleep";
	brain->m_ideas[2] = "Wanna eat";

	brain = animals[8]->getBrain();
	brain->m_ideas[0] = "Special dog idea";

	*(animals[2]) = *(animals[8]);
	std::cout << animals[2]->getBrain()->m_ideas[0] << std::endl;

	for (int i = 0; i < 10; i++)
		delete animals[i];

	Cat a;
	a.getBrain()->m_ideas[0] = "Cat a idea";
	Cat b = a;

	std::cout << a.getBrain()->m_ideas[0] << std::endl;
	std::cout << b.getBrain()->m_ideas[0] << std::endl;

	b.getBrain()->m_ideas[0] = "Cat b idea";

	std::cout << a.getBrain()->m_ideas[0] << std::endl;
	std::cout << b.getBrain()->m_ideas[0] << std::endl;

	return 0;
}
