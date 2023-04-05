/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 02:01:00 by scuter            #+#    #+#             */
/*   Updated: 2022/07/13 23:18:31 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scavtrap("P. Scavtrappington");
	ScavTrap scavcopy(scavtrap);

	scavtrap.attack("Zombie");
	scavtrap.guardGate();
	scavcopy.attack("Zombie");
	scavcopy.guardGate();
}
