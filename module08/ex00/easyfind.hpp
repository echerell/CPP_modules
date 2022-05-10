/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 22:56:57 by echerell          #+#    #+#             */
/*   Updated: 2022/05/09 23:31:50 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <stdexcept>

class NotFoundException : public std::exception
{
	virtual const char *what() const throw()
	{
		return "\033[31mValue not found\033[37m";
	}
};

template<typename T>
typename T::iterator	easyfind(T &cont, int val)
{
	typename T::iterator	result;

	result = std::find(cont.begin(), cont.end(), val);
	if (result == cont.end())
		throw NotFoundException();

	return result;
}

#endif
