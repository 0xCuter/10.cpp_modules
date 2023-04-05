#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap() :
		ClapTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) :
		ClapTrap(name)
{
	std::cout << "FragTrap Constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap & src) :
		ClapTrap(src)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap& FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
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

void FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " << _name;
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

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << ": \"high five guys!\"" << std::endl;
}


/* ************************************************************************** */
