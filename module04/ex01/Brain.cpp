/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 21:55:12 by echerell          #+#    #+#             */
/*   Updated: 2022/05/08 12:57:08 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "\033[32mBrain construtor\033[37m\n";
	for (int i = 0; i < 100; i++)
		m_ideas[i] = "";
}

Brain::Brain(const Brain &cp)
{
	std::cout << "\033[33mBrain copy constructor\033[37m\n";
	*this = cp;
}

Brain::~Brain()
{
	std::cout << "\033[31mBrain destructor\033[37m\n";
}

Brain &Brain::operator=(const Brain &asg)
{
	std::cout << "\033[33mBrain copy assignment operator\033[37m\n";
	for (int i = 0; i < 100; i++)
		this->m_ideas[i] = asg.m_ideas[i];

	return *this;
}
