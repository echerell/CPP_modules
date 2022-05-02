/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 16:17:09 by echerell          #+#    #+#             */
/*   Updated: 2022/05/02 21:56:05 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iomanip>
# include <iostream>
# include <cstdlib>

class Contact
{
private:
	int			m_id;
	std::string	m_info[5];

	enum		e_fields
	{
		FIRSTNAME = 0,
		LASTNAME,
		NICKNAME,
		PHONENUMBER,
		DARKESTSECRET
	};
public:
	Contact();
	~Contact();

	void	updateInfo(const std::string in[5], const int id);
	void	showData(void);
	void	showFull(const std::string names[5]);
};

#endif
