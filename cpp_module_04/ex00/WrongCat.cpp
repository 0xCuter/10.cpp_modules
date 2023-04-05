/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 02:43:56 by scuter            #+#    #+#             */
/*   Updated: 2022/07/14 12:35:43 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat() :
	WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type) :
	WrongAnimal(type)
{
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat & src) :
	WrongAnimal(src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat& WrongCat::operator=(WrongCat const & rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void WrongCat::makeSound(void) const
{
	std::cout << "*meow*" << std::endl;
}


/* ************************************************************************** */
