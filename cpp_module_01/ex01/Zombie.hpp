/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:44:29 by scuter            #+#    #+#             */
/*   Updated: 2022/07/07 17:31:19 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	public:

		Zombie();
		Zombie(std::string name);
		~Zombie();

		void setName(std::string name);
		void announce(void) const;

	private:

		std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
