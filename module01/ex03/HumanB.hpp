/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:08:35 by echerell          #+#    #+#             */
/*   Updated: 2022/05/04 13:41:37 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	const std::string	_m_name;
	const Weapon		*_m_weapon;
public:
	HumanB();
	HumanB(const std::string &name);
	~HumanB();

	void	attack(void) const;
	void	setWeapon(const Weapon &weapon);
};

#endif
