/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 01:54:21 by scuter            #+#    #+#             */
/*   Updated: 2022/07/15 14:05:20 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() :
	Animal("Dog"),
	_brain(new Brain())
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string type) :
	Animal(type),
	_brain(new Brain())
{
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog & src) :
	Animal(src),
	_brain(new Brain(*src._brain))
{
	std::cout << "Dog copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog& Dog::operator=(Dog const & rhs)
{
	if (this != &rhs)
	{
		_type = rhs._type;
		_brain = new Brain(*rhs._brain);
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Dog::makeSound(void) const
{
	std::cout << "*woof*" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Brain* Dog::getBrain() const
{
	return _brain;
}


/* ************************************************************************** */
