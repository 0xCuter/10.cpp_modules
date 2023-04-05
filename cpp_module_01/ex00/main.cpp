/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:42:03 by scuter            #+#    #+#             */
/*   Updated: 2022/07/08 15:29:06 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie1;

	zombie1 = newZombie("Alice");
	zombie1->announce();
	randomChump("Bob");
	delete zombie1;
}
