/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:50:21 by scuter            #+#    #+#             */
/*   Updated: 2022/07/08 15:19:03 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	public:

		Weapon();
		Weapon(std::string type);
		~Weapon();

		std::string const &	getType(void) const;
		void				setType(std::string type);

	private:

		std::string _type;
};






#endif
