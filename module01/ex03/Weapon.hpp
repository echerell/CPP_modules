/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:54:35 by echerell          #+#    #+#             */
/*   Updated: 2022/05/04 13:37:52 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
private:
	std::string	_m_type;
public:
	Weapon();
	Weapon(const std::string &type);
	~Weapon();

	const std::string	&getType(void) const;
	void				setType(const std::string &type);
};


#endif
