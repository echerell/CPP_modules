/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 00:04:58 by echerell          #+#    #+#             */
/*   Updated: 2022/05/10 00:42:10 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _m_size(0), _m_arr(0) {}

Span::Span(unsigned int size) : _m_size(size), _m_arr(0) {}

Span::Span(const Span &cp)
{
	*this = cp;
}

Span::~Span() {}

Span	&Span::operator=(const Span &asg)
{
	this->_m_size = asg._m_size;
	this->_m_arr = asg._m_arr;

	return *this;
}

unsigned int	Span::getArrSize() const
{
	return this->_m_arr.size();
}

unsigned int	Span::getFreeSize() const
{
	return (this->_m_size - this->getArrSize());
}

void			Span::addNumber(int val)
{
	if (this->_m_arr.size() == this->_m_size)
		throw Span::SpanFullException();
	this->_m_arr.push_back(val);
}

void			Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int>	tmp(begin, end);

	if (tmp.size() > this->getFreeSize())
		throw Span::NotSpaceException();
	std::copy(tmp.begin(), tmp.end(), std::back_inserter(this->_m_arr));
}

int				Span::shortestSpan() const
{
	std::vector<int>			tmp = _m_arr;
	std::vector<int>::iterator	it;
	int							res;

	if (this->_m_arr.size() <= 1)
		throw Span::LittleException();
	std::sort(tmp.begin(), tmp.end());
	res = *(tmp.begin() + 1) - *tmp.begin();
	if (this->getArrSize() == 2)
		return res;
	for (it = tmp.begin() + 1; it != tmp.end() - 1 && res; it++)
	{
		if (*(it + 1) - *it < res)
			res = *(it + 1) - *it;
	}

	return res;
}


int				Span::longestSpan() const
{
	std::vector<int>	tmp = _m_arr;

	if (_m_arr.size() <= 1)
		throw Span::LittleException();
	sort(tmp.begin(), tmp.end());
	return (*(tmp.end() - 1) - *tmp.begin());
}
