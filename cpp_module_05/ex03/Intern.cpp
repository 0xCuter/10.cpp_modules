/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 23:29:21 by scuter            #+#    #+#             */
/*   Updated: 2022/07/17 00:18:02 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern(const Intern & src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern& Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

Form *Intern::makeForm(std::string const & formName, std::string const & target) const
{
	Form* ret = NULL;

	std::string formNames[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	int i;
	for (i = 0; i < 3; i++)
	{
		if (formName == formNames[i])
			break ;
	}
	switch (i)
	{
		case 0:
			ret = new ShrubberyCreationForm(target);
			break;
		case 1:
			ret = new RobotomyRequestForm(target);
			break;
		case 2:
			ret = new PresidentialPardonForm(target);
			break;
	}
	if (ret)
		std::cout << "Intern creates " << formName << std::endl;
	else
		std::cerr << "Invalid form name" << std::endl;
	return ret;
}

void Intern::makeCoffee(void) const
{
	std::cout << "          ██    ██    ██      " << std::endl;
	std::cout << "        ██      ██  ██        " << std::endl;
	std::cout << "        ██    ██    ██        " << std::endl;
	std::cout << "          ██  ██      ██      " << std::endl;
	std::cout << "          ██    ██    ██      " << std::endl;
	std::cout << "                              " << std::endl;
	std::cout << "      ████████████████████    " << std::endl;
	std::cout << "      ██                ██████" << std::endl;
	std::cout << "      ██                ██  ██" << std::endl;
	std::cout << "      ██                ██  ██" << std::endl;
	std::cout << "      ██                ██████" << std::endl;
	std::cout << "        ██            ██      " << std::endl;
	std::cout << "    ████████████████████████  " << std::endl;
	std::cout << "    ██                    ██  " << std::endl;
	std::cout << "      ████████████████████    " << std::endl;
}


/* ************************************************************************** */
