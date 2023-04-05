/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:09:01 by scuter            #+#    #+#             */
/*   Updated: 2022/07/13 23:09:37 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

# include <iostream>
# include <string>

class ScavTrap : public ClapTrap
{

	public:

		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap();

		ScavTrap& operator=(ScavTrap const & rhs);

		void attack(std::string const & target);
		void guardGate(void);

};

#endif /* ******************************************************** SCAVTRAP_H */
