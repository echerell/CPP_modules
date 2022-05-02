/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 15:43:04 by echerell          #+#    #+#             */
/*   Updated: 2022/05/02 21:41:52 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
private:
	Contact		m_contacts[8];
	int			m_cur;
	bool		m_full;
	std::string	m_names[5];
public:
	PhoneBook();
	~PhoneBook();

	bool	addContact(void);
	void	showSaved(void);
	bool	searchContact(void);
};

#endif
