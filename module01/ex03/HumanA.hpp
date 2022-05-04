/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:53:02 by echerell          #+#    #+#             */
/*   Updated: 2022/05/04 13:39:14 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
private:
	const std::string	_m_name;
	const Weapon		&_m_weapon;
public:
	HumanA(const std::string &name, const Weapon &weapon);
	~HumanA();

	void	attack(void) const;
};


#endif
