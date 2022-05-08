/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echerell <echerell@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 17:11:48 by echerell          #+#    #+#             */
/*   Updated: 2022/05/08 18:18:42 by echerell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
	AForm("ShrubberyCreationForm", 145, 137), _m_target("*unknown*") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
	AForm("ShrubberyCreationForm", 145, 137), _m_target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cp) :
	AForm("ShrubberyCreationForm", 145, 137), _m_target(cp.getTarget())
{
	*this = cp;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &asg)
{
	asg.getExecGrade();
	return *this;
}

const std::string		&ShrubberyCreationForm::getTarget() const
{
	return this->_m_target;
}

void					ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	this->checkExecute(executor);

	std::ofstream	out;
	std::string		filename = this->_m_target + "_shrubbery";

	out.open(filename.c_str(), std::ios::out | std::ios::trunc);
	if (!out)
	{
		std::cerr << "\033[31mCannot create a file\033[37m\n";
		return;
	}
	out << "                                                         ." << std::endl;
	out << "                                              .         ;  " << std::endl;
	out << "                 .              .              ;%     ;;   " << std::endl;
	out << "                   ,           ,                :;%  %;   " << std::endl;
	out << "                    :         ;                   :;%;'     .,   " << std::endl;
	out << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
	out << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	out << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
	out << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	out << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	out << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	out << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
	out << "                      `@%:.  :;%.         ;@@%;'   " << std::endl;
	out << "                        `@%.  `;@%.      ;@@%;         " << std::endl;
	out << "                          `@%%. `@%%    ;@@%;        " << std::endl;
	out << "                            ;@%. :@%%  %@@%;       " << std::endl;
	out << "                              %@bd%%%bd%%:;     " << std::endl;
	out << "                                #@%%%%%:;;" << std::endl;
	out << "                                %@@%%%::;" << std::endl;
	out << "                                %@@@%(o);  . '         " << std::endl;
	out << "                                %@@@o%;:(.,'         " << std::endl;
	out << "                            `.. %@@@o%::;         " << std::endl;
	out << "                               `)@@@o%::;         " << std::endl;
	out << "                                %@@(o)::;        " << std::endl;
	out << "                               .%@@@@%::;         " << std::endl;
	out << "                               ;%@@@@%::;.          " << std::endl;
	out << "                              ;%@@@@%%:;;;. " << std::endl;
	out << "                          ...;%@@@@@%%:;;;;,..    Gilo97" << std::endl;
	out.close();
}
