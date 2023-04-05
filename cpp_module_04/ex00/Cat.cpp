/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 01:54:18 by scuter            #+#    #+#             */
/*   Updated: 2022/07/14 12:35:31 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() :
	Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string type) :
	Animal(type)
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat & src) :
	Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat& Cat::operator=(Cat const & rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Cat::makeSound(void) const
{
	std::cout << "*meow*" << std::endl;
}


/* ************************************************************************** */
