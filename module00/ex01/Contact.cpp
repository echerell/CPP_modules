/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 16:19:04 by echerell          #+#    #+#             */
/*   Updated: 2022/05/02 22:11:19 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void Contact::updateInfo(const std::string in[5], const int id)
{
	for (int i = FIRSTNAME; i <= DARKESTSECRET; i++)
		m_info[i] = in[i];
	m_id = id;
}

void Contact::showData(void)
{
	std::cout << "\n|" << std::setw(10) << std::setfill(' ') << m_id << '|';
	for (int i = FIRSTNAME; i < PHONENUMBER; i++)
	{
		if (m_info[i].length() > 10)
			std::cout << m_info[i].substr(0, 9) << '.' << '|';
		else
			std::cout << std::setw(10) << m_info[i] << '|';
	}
}

void Contact::showFull(const std::string names[5])
{
	for (int i = FIRSTNAME; i <= DARKESTSECRET; i++)
	{
		std::cout << std::setw(10) << std::setfill(' ') << names[i];
		std::cout << ": " << m_info[i] << std::endl;
	}
}
