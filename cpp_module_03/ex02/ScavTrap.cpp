/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:09:07 by scuter            #+#    #+#             */
/*   Updated: 2022/07/13 20:52:59 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap() :
		ClapTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) :
		ClapTrap(name)
{
	std::cout << "ScavTrap Constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap & src) :
		ClapTrap(src)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap& ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
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

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << _name;
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

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}


/* ************************************************************************** */
