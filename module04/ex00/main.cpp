/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:39:54 by echerell          #+#    #+#             */
/*   Updated: 2022/05/07 22:53:28 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;

	const WrongAnimal *wrgMeta = new WrongAnimal();
	const WrongAnimal *wrgCat = new WrongCat();

	std::cout << wrgCat->getType() << std::endl;
	wrgCat->makeSound();
	wrgMeta->makeSound();
	delete wrgMeta;
	delete wrgCat;

	WrongCat falseCat;

	std::cout << falseCat.getType() << std::endl;
	falseCat.makeSound();

	Animal *cat = new Cat();
	Animal *dog = new Dog();

	*cat = *dog;
	cat->makeSound();
	delete cat;
	delete dog;

	return 0;
}
