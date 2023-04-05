/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 02:41:47 by scuter            #+#    #+#             */
/*   Updated: 2022/07/14 12:37:11 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal() :
		_type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) :
		_type(type)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & src)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &WrongAnimal::operator=(WrongAnimal const & rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void WrongAnimal::makeSound(void) const
{
	std::cout << "*animal sound*" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string WrongAnimal::getType(void) const
{
	return _type;
}


/* ************************************************************************** */
