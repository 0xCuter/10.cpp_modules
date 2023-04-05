/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:36:34 by scuter            #+#    #+#             */
/*   Updated: 2022/07/12 19:50:56 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed() :
_value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const intValue) :
_value(intValue << _bits)
{
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const floatValue) :
_value(roundf(floatValue * (1 << _bits)))
{
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed & src)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed& Fixed::operator=(Fixed const & rhs)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	_value = rhs._value;
	return *this;
}


bool Fixed::operator>(Fixed const & rhs) const
{
	return (_value > rhs._value);
}

bool Fixed::operator<(Fixed const & rhs) const
{
	return (_value < rhs._value);
}

bool Fixed::operator>=(Fixed const & rhs) const
{
	return (_value >= rhs._value);
}

bool Fixed::operator<=(Fixed const & rhs) const
{
	return (_value <= rhs._value);
}

bool Fixed::operator==(Fixed const & rhs) const
{
	return (_value == rhs._value);
}

bool Fixed::operator!=(Fixed const & rhs) const
{
	return (_value != rhs._value);
}


Fixed Fixed::operator+(Fixed const & rhs) const
{
	Fixed ret;

	ret.setRawBits(_value + rhs._value);
	return (ret);
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	Fixed ret;

	ret.setRawBits(_value - rhs._value);
	return (ret);
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
	return (Fixed(toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
	return (Fixed(toFloat() / rhs.toFloat()));
}

Fixed& Fixed::operator++(void)
{
	++_value;
	return (*this);
}

Fixed& Fixed::operator--(void)
{
	--_value;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed ret = *this;
	_value++;
	return (ret);
}

Fixed Fixed::operator--(int)
{
	Fixed ret = *this;
	_value--;
	return (ret);
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


Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a <= b)
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a >= b)
		return (a);
	return (b);
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a <= b)
		return (a);
	return (b);
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a >= b)
		return (a);
	return (b);
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
