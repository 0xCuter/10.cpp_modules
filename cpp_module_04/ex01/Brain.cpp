/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 00:31:12 by scuter            #+#    #+#             */
/*   Updated: 2022/07/15 14:10:25 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	const std::string ideasTemplate[] = {
		"FOOD",
		"WATER",
		"SLEEP",
		"TREAT",
		"PETS",
		"WALK",
		"BALL",
		"SQUIRREL",
		"FRIEND",
		"WORLD DOMINATION"
	};
	for (int i = 0; i < 100; i++)
		_ideas[i] = ideasTemplate[rand() % 10];
}

Brain::Brain(const Brain & src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = src._ideas[i];
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain& Brain::operator=(Brain const & rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = rhs._ideas[i];
	}
	return *this;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const & Brain::getIdea(int index) const
{
	return _ideas[index];
}


/* ************************************************************************** */
