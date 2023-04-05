/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:43:10 by scuter            #+#    #+#             */
/*   Updated: 2022/07/16 18:18:36 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() :
	Form("RobotomyRequestForm", 72, 45),
	_target ("undefined")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) :
	Form("RobotomyRequestForm", 72, 45),
	_target (target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) :
	Form(src),
	_target (src._target)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	if (this != &rhs)
		this->Form::operator=(rhs);
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	RobotomyRequestForm::execute(Bureaucrat const & bureaucrat) const
{
	Form::validateExec(bureaucrat);
	std::cout << "*drilling noises*" << std::endl;
	if (rand() % 2)
		std::cout << _target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "The robotomy on " << _target << " has failed." << std::endl;
}


/* ************************************************************************** */
