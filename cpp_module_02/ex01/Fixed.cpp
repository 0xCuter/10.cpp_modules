/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:36:34 by scuter            #+#    #+#             */
/*   Updated: 2022/07/12 03:19:49 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed() :
_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const intValue) :
_value(intValue << _bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const floatValue) :
_value(roundf(floatValue * (1 << _bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed& Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_value = rhs._value;
	return *this;
}

std::ostream& operator<<(std::ostream& out, Fixed const & fixed)
{
	out << fixed.toFloat();
	return (out);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

float Fixed::toFloat(void) const
{
	return ((float)_value / (1 << _bits));
}

int Fixed::toInt(void) const
{
	return (_value >> _bits);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int Fixed::getRawBits(void) const
{
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

/* ************************************************************************** */
