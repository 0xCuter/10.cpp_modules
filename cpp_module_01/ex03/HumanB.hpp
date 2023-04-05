/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:14:06 by scuter            #+#    #+#             */
/*   Updated: 2022/07/08 15:10:59 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

#include <iostream>
#include <string>

class HumanB
{
	public:

		HumanB(std::string name);
		~HumanB();

		void setWeapon(Weapon& weapon);
		void attack(void) const;

	private:

		std::string _name;
		Weapon *_weapon;
};

#endif
