/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:50:19 by scuter            #+#    #+#             */
/*   Updated: 2022/07/08 15:19:03 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::Weapon(std::string type) :
_type(type)
{}

Weapon::~Weapon()
{}

std::string const & Weapon::getType(void) const
{
	return (_type);
}

void Weapon::setType(std::string type)
{
	_type = type;
}
