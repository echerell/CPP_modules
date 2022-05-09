/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 20:23:09 by echerell          #+#    #+#             */
/*   Updated: 2022/05/09 20:52:04 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstdlib>

template<typename T>
void	iter(T *arr, size_t size, void (*funcMap)(T &))
{
	for (size_t i = 0; i < size; i++)
		funcMap(arr[i]);
}

#endif
