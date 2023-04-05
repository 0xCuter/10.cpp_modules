/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:42:03 by scuter            #+#    #+#             */
/*   Updated: 2022/07/08 15:44:57 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *horde;
	int const N = 42;

	horde = zombieHorde(N, "BrainEater");
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
}
