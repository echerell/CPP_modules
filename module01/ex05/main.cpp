/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:08:30 by echerell          #+#    #+#             */
/*   Updated: 2022/05/04 20:11:38 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	std::cout << "\033[33mUnknown command\033[37m\n";
	harl.complain("unknown");

	std::cout << "\033[33mDebug command\033[37m\n";
	harl.complain("debug");

	std::cout << "\033[33mInfo command\033[37m\n";
	harl.complain("info");

	std::cout << "\033[33mWarning command\033[37m\n";
	harl.complain("warning");

	std::cout << "\033[33mError command\033[37m\n";
	harl.complain("error");
}
