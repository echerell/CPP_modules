/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeCast.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:35:40 by echerell          #+#    #+#             */
/*   Updated: 2022/05/09 14:38:13 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TypeCast.hpp"

TypeCast::TypeCast() :
	_m_selected(NO_T), _m_charVal(0), _m_intVal(0),
	_m_floatVal(0), _m_doubleVal(0) {}

TypeCast::TypeCast(const TypeCast &cp)
{
	*this = cp;
}

TypeCast::~TypeCast() {}

TypeCast	&TypeCast::operator=(const TypeCast &asg)
{
	this->_m_selected = asg._m_selected;
	this->_m_charVal = asg._m_charVal;
	this->_m_intVal = asg._m_intVal;
	this->_m_floatVal = asg._m_floatVal;
	this->_m_doubleVal = asg._m_doubleVal;

	return *this;
}

void		TypeCast::makeCast(const std::string &in)
{
	if (in.empty())
		throw TypeCast::EmptyException();
	this->_getType(in);
	this->_setVar(in);
}

void		TypeCast::printTypes() const
{
	this->_printChar();
	this->_printInt();
	this->_printFloat();
	this->_printDouble();
}

void		TypeCast::_getType(const std::string &in)
{
	this->_checkSpecial(in);
	if (this->_m_selected != NO_T)
		return;
	if (isdigit(in[0]) || in[0] == '-' || in[0] == '.')
	{
		this->_checkNumeric(in);
		if (this->_m_selected != NO_T)
			return;
	}
	if (in[1])
		throw TypeCast::WrongTypeException();
	this->_m_selected = CHAR_T;
}

void		TypeCast::_checkSpecial(const std::string &in)
{
	const std::string	specDouble[4] =
	{
		"inf",
		"+inf",
		"-inf",
		"nan"
	};
	const std::string	specFloat[4] =
	{
		"inff",
		"+inff",
		"-inff",
		"nanf"
	};

	for (int i = 0; i < 4; i++)
	{
		if (specDouble[i] == in)
		{
			this->_m_selected = DOUBLE_T;
			return;
		}
		else if (specFloat[i] == in)
		{
			this->_m_selected = FLOAT_T;
			return;
		}
	}
}

void		TypeCast::_checkNumeric(const std::string &in)
{
	int	i = 0;
	int	dots = 0;

	if (in[0] == '-' && in[1])
		i++;
	if (in[i] == '.' && (in[i+1] == 'f' || !in[i+1]))
		throw TypeCast::WrongTypeException();
	while (in[i] == '.' || isdigit(in[i]))
	{
		if (in[i] == '.')
			dots++;
		if (dots > 1)
			throw TypeCast::WrongTypeException();
		i++;
	}
	if (!in[i])
	{
		if (dots == 1)
		{
			this->_m_selected = DOUBLE_T;
			return;
		}
		this->_m_selected = INT_T;
		return;
	}
	else if (in[i] == 'f' && !in[i+1] && dots == 1)
	{
		this->_m_selected = FLOAT_T;
		return;
	}
}

void		TypeCast::_setVar(const std::string &in)
{
	if (this->_m_selected == CHAR_T)
		this->_m_charVal = in[0];
	else if (this->_m_selected == INT_T)
		this->_m_intVal = atoi(in.c_str());
	else if (this->_m_selected == FLOAT_T)
		this->_m_floatVal = atof(in.c_str());
	else if (this->_m_selected == DOUBLE_T)
		this->_m_doubleVal = atof(in.c_str());
}

void		TypeCast::_printChar() const
{
	if (this->_m_selected == INT_T)
	{
		if (this->_checkCharConv(this->_m_intVal))
			std::cout << "char: " << static_cast<char>(this->_m_intVal) << std::endl;
	}
	else if (this->_m_selected == FLOAT_T)
	{
		if (this->_checkCharConv(this->_m_floatVal))
			std::cout << "char: " << static_cast<char>(this->_m_floatVal) << std::endl;
	}
	else if (this->_m_selected == DOUBLE_T)
	{
		if (this->_checkCharConv(this->_m_doubleVal))
			std::cout << "char: " << static_cast<char>(this->_m_doubleVal) << std::endl;
	}
	else
		std::cout << "char: " << this->_m_charVal << std::endl;
}

bool		TypeCast::_checkCharConv(double num) const
{
	if (num - static_cast<int>(num) != 0 || num > 127.0 || num < 0.0)
		std::cout << "char: impossible\n";
	else if (num <= 31.0 || num == 127.0)
		std::cout << "char: Non displayable\n";
	else
		return true;
	return false;
}

void		TypeCast::_printInt() const
{
	if (this->_m_selected == CHAR_T)
		std::cout << "int: " << static_cast<int>(this->_m_charVal) << std::endl;
	else if (this->_m_selected == INT_T)
		std::cout << "int: " << this->_m_intVal << std::endl;
	else if (this->_m_selected == FLOAT_T)
	{
		if (this->_checkIntConv(this->_m_floatVal))
			std::cout << "int: " << static_cast<int>(this->_m_floatVal) << std::endl;
	}
	else if (this->_m_selected == DOUBLE_T)
	{
		if (this->_checkIntConv(this->_m_doubleVal))
			std::cout << "int: " << static_cast<int>(this->_m_doubleVal) << std::endl;
	}
}

bool		TypeCast::_checkIntConv(double num) const
{
	if (num <= std::numeric_limits<int>::max() && num >= std::numeric_limits<int>::min()
		&& num != std::numeric_limits<double>::infinity() && num != -std::numeric_limits<double>::infinity()
		&& !std::isnan(num))
		return true;
	else
	{
		std::cout << "int: impossible\n";
		return false;
	}
}

void		TypeCast::_printFloat() const
{
	if (this->_m_selected == CHAR_T)
		std::cout << "float: " << static_cast<float>(this->_m_charVal) << ".0f\n";
	else if (this->_m_selected == INT_T)
		std::cout << "float: " << static_cast<float>(this->_m_intVal) << ".0f\n";
	else if (this->_m_selected == FLOAT_T)
		std::cout << "float: " << this->_m_floatVal <<
			this->_checkDot(static_cast<float>(this->_m_floatVal)) << "f\n";
	else if (this->_m_selected == DOUBLE_T)
		if (this->_checkFloatConv(this->_m_doubleVal))
			std::cout << "float: " << static_cast<float>(this->_m_doubleVal) <<
				this->_checkDot(static_cast<float>(this->_m_doubleVal)) << "f\n";
}

const char	*TypeCast::_checkDot(double num) const
{
	if (num - static_cast<int>(num) == 0.0)
		return ".0";
	return "";
}

bool		TypeCast::_checkFloatConv(double num) const
{
	if ((num <= std::numeric_limits<float>::max() && num >= std::numeric_limits<float>::min())
		|| num == std::numeric_limits<double>::infinity() || num == -std::numeric_limits<double>::infinity()
		|| std::isnan(num))
		return true;
	else
	{
		std::cout << "float: impossible\n";
		return false;
	}
}

void		TypeCast::_printDouble() const
{
	if (this->_m_selected == CHAR_T)
		std::cout << "double: " << static_cast<double>(this->_m_charVal) << ".0\n";
	else if (this->_m_selected == INT_T)
		std::cout << "double " << static_cast<double>(this->_m_intVal) << ".0\n";
	else if (this->_m_selected == FLOAT_T)
		std::cout << "double " << static_cast<double>(this->_m_floatVal) <<
			this->_checkDot(static_cast<double>(this->_m_floatVal)) << std::endl;
	else if (this->_m_selected == DOUBLE_T)
		std::cout << "double " << static_cast<double>(this->_m_doubleVal) <<
			this->_checkDot(static_cast<double>(this->_m_doubleVal)) << std::endl;
}
