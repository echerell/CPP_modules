/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 21:44:30 by echerell          #+#    #+#             */
/*   Updated: 2022/05/07 22:40:56 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
public:
	std::string	m_ideas[100];

	Brain();
	Brain(const Brain &cp);
	~Brain();

	Brain	&operator=(const Brain &asg);
};

#endif
