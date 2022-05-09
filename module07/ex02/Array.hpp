/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 20:58:30 by echerell          #+#    #+#             */
/*   Updated: 2022/05/09 21:56:56 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdexcept>
# include <iostream>

template<typename T>
class Array
{
private:
	int	_m_size;
	T	*_m_arr;
public:
	Array<T>() : _m_size(0), _m_arr(NULL) {}

	Array<T>(const unsigned int size) : _m_size(size)
	{
		if (size < 0)
			throw std::overflow_error("Out of bounds");
		this->_m_arr = new T[size];
	}

	Array<T>(const Array<T> &cp)
	{
		this->_m_arr = new T[cp._m_size];
		*this= cp;
	}

	~Array<T>()
	{
		if (this->_m_size)
			delete [] this->_m_arr;
	}

	Array<T>	&operator=(const Array<T> &asg)
	{
		if (this->_m_size > 0)
			delete [] this->_m_arr;
		this->_m_size = asg._m_size;
		this->_m_arr = new T[this->_m_size];
		for (int i = 0; i < this->_m_size; i++)
			this->_m_arr[i] = asg[i];

		return *this;
	}

	T			&operator[](const int id) const
	{
		if (id >= this->_m_size || id < 0)
			throw std::overflow_error("Out of bounds");

		return this->_m_arr[id];
	}

	int			size() const
	{
		return this->_m_size;
	}

	const T		&getVal(const int &i) const
	{
		return this->_m_arr[i];
	}
};

template<typename T>
std::ostream	&operator<<(std::ostream &o, const Array<T> &ins)
{
	std::cout << "Array:\n";
	for (int i = 0; i < ins.size(); i++)
	{
		std::cout << "[" << i << "] ";
		std::cout << ins.getVal(i) << std::endl;
	}

	return o;
}

#endif
