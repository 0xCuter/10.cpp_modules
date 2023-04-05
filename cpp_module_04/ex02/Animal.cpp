/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 01:36:40 by scuter            #+#    #+#             */
/*   Updated: 2022/07/15 22:22:01 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() :
		_type("")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) :
		_type(type)
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal & src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &Animal::operator=(Animal const & rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	return *this;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Animal::getType(void) const
{
	return _type;
}


/* ************************************************************************** */
