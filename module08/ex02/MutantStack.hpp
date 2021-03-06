/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:18:10 by echerell          #+#    #+#             */
/*   Updated: 2022/05/10 13:23:09 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template<typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	MutantStack() : std::stack<T, Container>() {}
	MutantStack(const MutantStack<T> &cp) : std::stack<T, Container>(cp) {}
	~MutantStack() {}

	MutantStack	&operator=(const MutantStack &asg)
	{
		this->c = asg.c;

		return *this;
	}

	typedef typename Container::iterator iterator;
	typedef typename Container::const_iterator const_iterator;
	typedef typename Container::reverse_iterator reverse_iterator;
	typedef typename Container::const_reverse_iterator const_reverse_iterator;

	iterator				begin()
	{
		return this->c.begin();
	}
	const_iterator			begin() const
	{
		return this->c.begin();
	}
	reverse_iterator		rbegin()
	{
		return this->c.rbegin();
	}
	const_reverse_iterator	rbegin() const
	{
		return this->c.rbegin();
	}

	iterator				end()
	{
		return this->c.end();
	}
	const_iterator			end() const
	{
		return this->c.end();
	}
	reverse_iterator		rend()
	{
		return this->c.rend();
	}
	const_reverse_iterator	rend() const
	{
		return this->c.rend();
	}
};

#endif
