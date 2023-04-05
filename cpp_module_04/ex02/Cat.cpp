/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 01:54:18 by scuter            #+#    #+#             */
/*   Updated: 2022/07/15 14:05:20 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() :
	Animal("Cat"),
	_brain(new Brain())
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string type) :
	Animal(type),
	_brain(new Brain())
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat & src) :
	Animal(src),
	_brain(new Brain(*src._brain))
{
	std::cout << "Cat copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat& Cat::operator=(Cat const & rhs)
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

void Cat::makeSound(void) const
{
	std::cout << "*meow*" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Brain* Cat::getBrain() const
{
	return _brain;
}


/* ************************************************************************** */
