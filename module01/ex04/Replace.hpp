/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:12:48 by echerell          #+#    #+#             */
/*   Updated: 2022/05/04 18:13:07 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <string>

class Replace
{
private:
	std::ifstream		_m_input;
	const std::string	_m_filename;
	const std::string	_m_strOld;
	const std::string	_m_strNew;
public:
	Replace(const std::string &file, const std::string &strOld, const std::string &strNew);
	~Replace();

	bool	openFile(void);
	void	replaceStr(void);
	void	writeFile(const std::string &changed);
};

#endif
