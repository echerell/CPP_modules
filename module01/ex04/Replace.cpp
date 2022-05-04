/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:35:48 by echerell          #+#    #+#             */
/*   Updated: 2022/05/04 20:14:11 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace( const std::string &file, const std::string &str_old, const std::string &str_new) :
				_m_filename(file), _m_strOld(str_old), _m_strNew(str_new)
{}

Replace::~Replace() {}

bool Replace::openFile()
{
	_m_input.open(_m_filename.c_str(), std::ios::in);
	if (!_m_input)
	{
		std::cout << "\033[31mError: cannot open file\033[37m\n";
		return false;
	}
	return true;
}

void Replace::replaceStr()
{
	std::string	in;
	size_t		len_old = this->_m_strOld.length();

	this->_m_input.seekg(0, std::ios::end);
	in.reserve(this->_m_input.tellg());
	this->_m_input.seekg(0, std::ios::beg);
	in.assign((std::istreambuf_iterator<char>(this->_m_input)),
				std::istreambuf_iterator<char>());

	for (size_t i = 0; i < in.length(); i++)
	{
		if (in.compare(i, len_old, this->_m_strOld) == 0)
		{
			in.erase(i, len_old);
			in.insert(i, this->_m_strNew);
		}
	}
	this->_m_input.close();
	writeFile(in);
}

void Replace::writeFile(const std::string &changed)
{
	std::ofstream	out_file;
	std::string		filename = this->_m_filename;

	filename += ".replace";
	out_file.open(filename.c_str(), std::ios::out | std::ios::trunc);
	out_file << changed;
	out_file.close();
}
