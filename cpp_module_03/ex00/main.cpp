/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 02:01:00 by scuter            #+#    #+#             */
/*   Updated: 2022/07/13 14:51:40 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap claptrap("P. Claptrappington");

	claptrap.attack("Zombie");
	claptrap.takeDamage(7);
	claptrap.beRepaired(3);
	claptrap.attack("Zombie");
	claptrap.takeDamage(7);
	claptrap.attack("Zombie");
}
