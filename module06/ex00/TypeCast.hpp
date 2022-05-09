/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeCast.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:12:44 by echerell          #+#    #+#             */
/*   Updated: 2022/05/09 14:31:27 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPECAST_HPP
# define TYPECAST_HPP

# define NO_T -1
# define CHAR_T 0
# define INT_T 1
# define FLOAT_T 2
# define DOUBLE_T 3

# include <iostream>
# include <stdexcept>
# include <limits>
# include <cmath>

class TypeCast
{
private:
	int			_m_selected;
	char		_m_charVal;
	int			_m_intVal;
	float		_m_floatVal;
	double		_m_doubleVal;

	void		_getType(const std::string &in);
	void		_checkSpecial(const std::string &in);
	void		_checkNumeric(const std::string &in);
	void		_setVar(const std::string &in);
	void		_printChar() const;
	void		_printInt() const;
	void		_printFloat() const;
	void		_printDouble() const;
	bool		_checkCharConv(double num) const;
	bool		_checkIntConv(double num) const;
	bool		_checkFloatConv(double num) const;
	const char	*_checkDot(double num) const;
public:
	TypeCast();
	TypeCast(const TypeCast &cp);
	~TypeCast();

	TypeCast	&operator=(const TypeCast &asg);

	void		makeCast(const std::string &in);
	void		printTypes() const;

	class EmptyException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Received empty string from input";
		}
	};

	class WrongTypeException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Cannot define the type from input";
		}
	};

	class WrongNumArgException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Invalid number of arguments";
		}
	};
};

#endif
