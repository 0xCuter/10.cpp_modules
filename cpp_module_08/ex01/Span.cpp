/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:48:29 by scuter            #+#    #+#             */
/*   Updated: 2022/07/19 02:00:55 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span() :
_size(0)
{
}

Span::Span(unsigned int const N) :
_size(N)
{
}

Span::Span(Span const & src) :
_size(src._size),
_v(src._v)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span& Span::operator=(Span const & rhs)
{
	if (this != &rhs)
	{
		_v = rhs._v;
		_size = rhs._size;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Span::addNumber(int x)
{
	if (_v.size() >= _size)
		throw ContainerFullException();
	_v.push_back(x);
}

unsigned int Span::shortestSpan(void) const
{
	if (_v.size() < 2)
		throw ContainerTooSmallException();

	std::vector<int> sorted = _v;
	std::sort(sorted.begin(), sorted.end());
	std::vector<int> tmp;
	for (std::vector<int>::iterator it = sorted.begin() + 1; it < sorted.end(); it++)
		tmp.push_back(*it - *(it - 1));
	return *std::min_element(tmp.begin(), tmp.end());
}

unsigned int Span::longestSpan(void) const
{
	if (_v.size() < 2)
		throw ContainerTooSmallException();
	return *std::max_element(_v.begin(), _v.end()) - *std::min_element(_v.begin(), _v.end());
}

void Span::fill(std::vector<int>::iterator const & start, std::vector<int>::iterator const & end)
{
	if (std::distance(start, end) + _v.size() > _size)
	{
		_v.insert(_v.end(), start, start + (_size - _v.size()));
		throw ContainerFullException();
	}
	else
		_v.insert(_v.end(), start, end);
}


/* ************************************************************************** */
