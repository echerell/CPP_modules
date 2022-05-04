/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:23:58 by echerell          #+#    #+#             */
/*   Updated: 2022/05/04 11:50:38 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	const std::string			str = "HI THIS IS BRAIN";
	const std::string	*const	stringPTR = &str;
	const std::string			&stringREF = str;

	std::cout << "Orig address: " << &str << std::endl;
	std::cout << "PTR address:  " << &(*stringPTR) << std::endl;
	std::cout << "REF address:  " << &stringREF << std::endl << std::endl;

	std::cout << "Orig value: " << str << std::endl;
	std::cout << "PRT value:  " << *stringPTR << std::endl;
	std::cout << "REF value:  " << stringREF << std::endl;

}
