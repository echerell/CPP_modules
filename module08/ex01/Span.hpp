/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 23:41:38 by echerell          #+#    #+#             */
/*   Updated: 2022/05/10 10:21:26 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <stdexcept>
# include <algorithm>

class Span
{
private:
	unsigned int		_m_size;
	std::vector<int>	_m_arr;
public:
	Span();
	Span(unsigned int size);
	Span(const Span &cp);
	~Span();

	Span	&operator=(const Span &asg);

	void	addNumber(int val);
	void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int		shortestSpan() const;
	int		longestSpan() const;

	unsigned int	getArrSize() const;
	unsigned int	getFreeSize() const;

	class NotSpaceException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "\033[31mNot enough space to add the range of integers\033[37m";
		}
	};

	class SpanFullException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "\033[31mSpan is full, cannot add an integer\033[37m";
		}
	};

	class LittleException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "\033[31mSpan has not enough values\033[37m";
		}
	};
};

#endif
