/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 20:12:51 by echerell          #+#    #+#             */
/*   Updated: 2022/05/09 20:17:09 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T &x, T &y)
{
	T	tmp = x;

	x = y;
	y = tmp;
}

template<typename T>
const T	&min(const T &x, const T &y)
{
	return (x < y ? x : y);
}

template<typename T>
const T	&max(const T &x, const T &y)
{
	return (x > y ? x : y);
}

#endif
