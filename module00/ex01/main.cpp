/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:56:30 by echerell          #+#    #+#             */
/*   Updated: 2022/05/02 22:42:23 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	book;
	std::string	cmd;

	while (true)
	{
		std::cout << "\033[32mPhonebook> \033[37m";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			book.addContact();
		else if (cmd == "SEARCH")
		{
			if (!book.searchContact())
				std::cout << "\033[31mWrong index, back to menu\n\033[37m";
		}
		else if (cmd == "EXIT" || std::cin.eof())
		{
			std::cout << "Exit the program\n";
			break;
		}
		else
			std::cout << "\033[31mUnknown command\n\033[37m";
		if (std::cin.eof())
		{
			std::cout << "\033[31mReceived EOF\n\033[37m";
			std::cin.clear();
		}
	}

	return 0;
}
