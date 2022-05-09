/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 20:26:01 by echerell          #+#    #+#             */
/*   Updated: 2022/05/09 21:41:17 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include "iter.hpp"

template<typename T>
void	display(T &cell)
{
	std::cout << cell << std::endl;
}

void	increment(int &cell)
{
	cell++;
}

int		main()
{
	std::string	sonnetPart[5];
	int			intArr[5] = {1, 2, 3, 4, 5};

	std::cout <<"\033[32mString display\033[37m\n";
	sonnetPart[0] = "Some glory in their birth, some in their skill,";
	sonnetPart[1] = "Some in their wealth, some in their body’s force,";
	sonnetPart[2] = "Some in their garments though new-fangled ill;";
	sonnetPart[3] = "Some in their hawks and hounds, some in their horse;";
	sonnetPart[4] = "And every humour hath his adjunct pleasure...";
	::iter(sonnetPart, 5, &display);

	std::cout << "\033[32mInt array increment\033[37m\n";
	std::cout << "Before: \n";
	::iter(intArr, 5, &display);
	std::cout << "After: \n";
	::iter(intArr, 5, &increment);
	::iter(intArr, 5, &display);

	return 0;
}
