/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:38:40 by echerell          #+#    #+#             */
/*   Updated: 2022/05/02 22:39:21 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	m_cur = 0;
	m_full = false;
	m_names[0] = "First name";
	m_names[1] = "Last name";
	m_names[2] = "Nickname";
	m_names[3] = "Phone number";
	m_names[4] = "Darkest secert";
}

PhoneBook::~PhoneBook() {}

bool PhoneBook::addContact(void)
{
	std::string	in[5];

	for (int i = 0; i < 5; i++)
	{
		std::cout << m_names[i] << ": ";
		std::getline(std::cin, in[i]);
		if (in[i].empty())
		{
			std::cout << "\033[31mFailed to add contact, the string is empty\n\033[37m";
			return false;
		}
	}
	if (m_cur == 8)
	{
		m_full = true;
		m_cur = 0;
	}
	m_contacts[m_cur].updateInfo(in, m_cur + 1);
	m_cur++;
	return true;
}

void PhoneBook::showSaved(void)
{
	std::cout << '|' << std::setw(45) << std::setfill('*') << "|\n";
	std::cout << '|' << std::setw(10) << std::setfill(' ') << "index" << '|';
	for (int i = 0; i < 3; i++)
		std::cout << std::setw(10) << m_names[i] << '|';
	if (m_full)
		for (int i = 0; i < 8; i++)
			m_contacts[i].showData();
	else
		for (int i = 0; i < m_cur; i++)
			m_contacts[i].showData();
	std::cout << "\n|" << std::setw(45) << std::setfill('*') << "|\n";
}

bool PhoneBook::searchContact(void)
{
	std::string	in;
	int			id;

	showSaved();
	std::cout << "\033[33mWhat index to display full info> \033[37m";
	std::getline(std::cin, in);
	if (in.length() != 1 || std::cin.eof())
		return false;
	id = atoi(in.c_str());
	if (id <= 0 || id > (m_full ? 8 : m_cur))
		return false;
	m_contacts[id-1].showFull(m_names);
	return true;
}
