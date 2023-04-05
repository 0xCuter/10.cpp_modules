/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 01:49:22 by scuter            #+#    #+#             */
/*   Updated: 2022/07/16 17:33:28 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() :
_name("undefined"),
_signed(false),
_signGrade(1),
_execGrade(1)
{
}

Form::Form(std::string const name, unsigned int const signGrade, unsigned int const execGrade) :
_name(name),
_signed(false),
_signGrade(signGrade),
_execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form & src) :
_name(src._name),
_signed(src._signed),
_signGrade(src._signGrade),
_execGrade(src._execGrade)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form& Form::operator=(Form const & rhs)
{
	if (this != &rhs)
		_signed = rhs._signed;
	return *this;
}

std::ostream& operator<<(std::ostream & o, Form const & i)
{
	o << "Form name: " << i.getName() << std::endl
	<< "Form is signed: " << std::boolalpha << i.isSigned() << std::endl
	<< "Form signature grade: " << i.getSignGrade() << std::endl
	<< "Form execution grade: " << i.getExecGrade() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Form::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() <= _signGrade)
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

void Form::validateExec(Bureaucrat const &bureaucrat) const
{
	if (!_signed)
		throw Form::FormNotSignedException();
	if (bureaucrat.getGrade() > _execGrade)
		throw Form::GradeTooLowException();
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Form::getName() const
{
	return _name;
}

bool Form::isSigned() const
{
	return _signed;
}

unsigned int Form::getSignGrade() const
{
	return _signGrade;
}

unsigned int Form::getExecGrade() const
{
	return _execGrade;
}


/* ************************************************************************** */
