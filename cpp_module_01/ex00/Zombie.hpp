/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:44:29 by scuter            #+#    #+#             */
/*   Updated: 2022/07/07 16:15:03 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	public:

		Zombie(std::string name);
		~Zombie();

		void announce(void) const;

	private:

		std::string _name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
