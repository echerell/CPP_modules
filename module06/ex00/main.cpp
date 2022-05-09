/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:29:05 by echerell          #+#    #+#             */
/*   Updated: 2022/05/09 14:33:31 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TypeCast.hpp"

int	main(int argc, char **argv)
{
	try
	{
		if (argc == 1)
			throw TypeCast::WrongNumArgException();

		TypeCast	typeCast;
		std::string	in(argv[1]);

		typeCast.makeCast(in);
		typeCast.printTypes();

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


	return 0;
}
