/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:23:37 by scuter            #+#    #+#             */
/*   Updated: 2022/07/16 17:33:28 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() :
	Form("ShrubberyCreationForm", 145, 137),
	_target ("undefined")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) :
	Form("ShrubberyCreationForm", 145, 137),
	_target (target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) :
	Form(src),
	_target (src._target)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	if (this != &rhs)
		this->Form::operator=(rhs);
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	ShrubberyCreationForm::execute(Bureaucrat const & bureaucrat) const
{
	std::ofstream	file;

	Form::validateExec(bureaucrat);
	file.open((_target + "_shrubbery").c_str());
	if (!file.is_open())
		throw std::ofstream::failure(strerror(errno));
	file << "            _-_            " << std::endl;
	file << "         /~~   ~~\\         " << std::endl;
	file << "      /~~         ~~\\      " << std::endl;
	file << "     {               }     " << std::endl;
	file << "      \\  _-     -_  /      " << std::endl;
	file << "        ~  \\\\ //  ~        " << std::endl;
	file << "            | |            " << std::endl;
	file << "            | |            " << std::endl;
	file << "           // \\\\           " << std::endl;
	file.close();
}


/* ************************************************************************** */
