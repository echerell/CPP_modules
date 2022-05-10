/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:47:49 by echerell          #+#    #+#             */
/*   Updated: 2022/05/10 13:17:37 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <vector>
#include "MutantStack.hpp"

int	main()
{
	{
		std::cout << "\033[32m__SUBJECT_TEST__\033[37m\n";
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << "top: " << mstack.top() << std::endl;

		mstack.pop();

		std::cout << "size: " << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);

		std::cout << "top stack: " << s.top() << " size stack: " << s.size() << std::endl;
	}

	{
		std::cout << "\033[32m__LIST_TEST__\033[37m\n";
		std::cout << "*With const reverse iterator*\n";

		MutantStack<int, std::list<int> > mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << "top: " << mstack.top() << std::endl;

		mstack.pop();

		std::cout << "size: " << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int, std::list<int> >::const_reverse_iterator it = mstack.rbegin();
		MutantStack<int, std::list<int> >::const_reverse_iterator ite = mstack.rend();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int, std::list<int> > s(mstack);

		std::cout << "top stack: " << s.top() << " size stack: " << s.size() << std::endl;
	}

	{
		std::cout << "\033[32m__VECTOR_TEST__\033[37m\n";
		std::cout << "*With const iterator*\n";

		MutantStack<int, std::vector<int> > mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << "top: " << mstack.top() << std::endl;

		mstack.pop();

		std::cout << "size: " << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int, std::vector<int> >::const_iterator it = mstack.begin();
		MutantStack<int, std::vector<int> >::const_iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int, std::vector<int> > s(mstack);

		std::cout << "top stack: " << s.top() << " size stack: " << s.size() << std::endl;
	}

	return 0;
}
