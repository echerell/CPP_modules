/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 19:36:34 by echerell          #+#    #+#             */
/*   Updated: 2022/05/04 20:07:24 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::complain(std::string level)
{
	void (Harl::*funcPtr[4]) (void) =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	std::string compLevels[4] =
	{
		"debug",
		"info",
		"warning",
		"error"
	};

	for (int i = 0; i < 4; i++)
	{
		void (Harl::*takenComp) (void) = funcPtr[i];
		if (level == compLevels[i])
			(this->*takenComp)();
	}
}

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You did not put enough bacon in my burger! If you did, I would not be asking for more!\n";
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I have been coming for years whereas you started working here since last month.\n";
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}
