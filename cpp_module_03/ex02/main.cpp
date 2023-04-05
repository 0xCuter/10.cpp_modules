/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 02:01:00 by scuter            #+#    #+#             */
/*   Updated: 2022/07/13 23:29:25 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap fragtrap("P. Fragtrappington");
	FragTrap fragcopy(fragtrap);

	fragtrap.attack("Zombie");
	fragtrap.highFivesGuys();
	fragcopy.attack("Zombie");
	fragcopy.highFivesGuys();
}
