/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:43:10 by scuter            #+#    #+#             */
/*   Updated: 2022/07/16 20:07:38 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() :
	Form("PresidentialPardonForm", 25, 5),
	_target ("undefined")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) :
	Form("PresidentialPardonForm", 25, 5),
	_target (target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) :
	Form(src),
	_target (src._target)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	if (this != &rhs)
		this->Form::operator=(rhs);
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	PresidentialPardonForm::execute(Bureaucrat const & bureaucrat) const
{
	Form::validateExec(bureaucrat);
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}


/* ************************************************************************** */
