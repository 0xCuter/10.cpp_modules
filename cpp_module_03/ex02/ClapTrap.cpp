/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 02:27:34 by scuter            #+#    #+#             */
/*   Updated: 2022/07/13 20:51:18 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap() :
_name("default"),
_hitPoints(10),
_energyPoints(10),
_attackDamage(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
_name(name),
_hitPoints(10),
_energyPoints(10),
_attackDamage(0)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << _name;
	if (_hitPoints == 0)
	{
		std::cout << " cannot attack because it's dead!" << std::endl;
	}
	else if (_energyPoints == 0)
	{
		std::cout << " doesn't have enough energyPoints to attack!" << std::endl;
	}
	else
	{
		std::cout << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name;
	if (_hitPoints == 0)
	{
		std::cout << " is already dead!" << std::endl;
	}
	else if (amount >= _hitPoints)
	{
		_hitPoints = 0;
		std::cout << " takes " << amount << " damage and dies!" << std::endl;
	}
	else
	{
		_hitPoints -= amount;
		std::cout << " takes " << amount << " damage, " << _hitPoints << " hitPoints remaining!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << _name;
	if (_hitPoints == 0)
	{
		std::cout << " cannot be repaired because it's dead!" << std::endl;
	}
	else if (_energyPoints == 0)
	{
		std::cout << " doesn't have enough energyPoints to be repaired!" << std::endl;
	}
	else
	{
		_hitPoints += amount;
		std::cout <<  " has been repaired for " << amount << " hitPoints, now it has " << _hitPoints << " hitPoints!" << std::endl;
		_energyPoints--;
	}
}


/* ************************************************************************** */
