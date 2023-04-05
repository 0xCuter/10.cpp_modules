/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 01:54:21 by scuter            #+#    #+#             */
/*   Updated: 2022/07/14 12:36:20 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() :
	Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string type) :
	Animal(type)
{
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog & src) :
	Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog& Dog::operator=(Dog const & rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Dog::makeSound(void) const
{
	std::cout << "*woof*" << std::endl;
}


/* ************************************************************************** */
