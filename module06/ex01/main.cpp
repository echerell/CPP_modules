/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:41:21 by echerell          #+#    #+#             */
/*   Updated: 2022/05/09 15:17:56 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

uintptr_t	serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data		*deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int	main()
{
	Data		data;
	Data		*new_ptr;
	uintptr_t	raw;

	data.s = "String";
	data.i1 = 21;
	data.i2 = 42;

	raw = serialize(&data);
	new_ptr = deserialize(raw);
	std::cout << "new ptr: " << new_ptr->s << " " << new_ptr->i1 << " "
			<< new_ptr->i2 << std::endl;

	new_ptr->s = "New string";
	new_ptr->i1 = 42;
	new_ptr->i2 = 21;

	std::cout << "changed new ptr: " << new_ptr->s << " " << new_ptr->i1 << " "
			<< new_ptr->i2 << std::endl;
	return 0;
}
