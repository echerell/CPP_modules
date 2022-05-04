/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:35:41 by echerell          #+#    #+#             */
/*   Updated: 2022/05/04 18:15:26 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

bool	check_errs(const int &argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "\033[31mError: invalid number of argumnets\033[37m\n";
		return false;
	}
	if (argv[1][0] == '\0')
	{
		std::cout << "\033[31mError: No name in file\033[37m\n";
		return false;
	}
	if (argv[2][0] == '\0' || argv[3][0] == '\0')
	{
		std::cout << "\033[31mError: Srings cannot be empty\033[37m\n";
		return false;
	}

	return true;
}

int	main(int argc, char **argv)
{
	if (!check_errs(argc, argv))
		return 1;
	Replace	rep(argv[1], argv[2], argv[3]);
	if (!rep.openFile())
		return 1;
	rep.replaceStr();
	return 0;
}
