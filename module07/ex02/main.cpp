/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 21:40:12 by echerell          #+#    #+#             */
/*   Updated: 2022/05/09 21:57:47 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main()
{
	Array<int>			emptyArr;
	Array<std::string>	strArr(5);
	Array<std::string>	asgArr;

	std::cout << "\033[32mAttempt to write, when out of bounds\033[37m\n";
	try
	{
		emptyArr[42] = 5;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\033[32mAssignment test\033[37m\n";
	strArr[0] = "Some glory in their birth, some in their skill,";
	strArr[1] = "Some in their wealth, some in their body’s force,";
	strArr[2] = "Some in their garments though new-fangled ill;";
	strArr[3] = "Some in their hawks and hounds, some in their horse;";
	strArr[4] = "And every humour hath his adjunct pleasure...";

	std::cout << "strArr[" << strArr.size() << "]: " << strArr;
	asgArr = strArr;
	std::cout << "asgArr[" << asgArr.size() << "]: " << asgArr;

	asgArr[2] = "string has been removed";

	std::cout << "strArr[2]: " << strArr[2] << std::endl;
	std::cout << "asgArr[2]: " << asgArr[2] << std::endl;

	return 0;
}
