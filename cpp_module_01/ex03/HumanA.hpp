/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:14:01 by scuter            #+#    #+#             */
/*   Updated: 2022/07/08 01:57:11 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

#include <iostream>
#include <string>

class HumanA
{
	public:

		HumanA(std::string name, Weapon& weapon);
		~HumanA();

		void attack(void) const;

	private:

		std::string _name;
		Weapon& _weapon;
};

#endif
