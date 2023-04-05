/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 22:41:30 by scuter            #+#    #+#             */
/*   Updated: 2022/07/13 23:18:31 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

# include <iostream>
# include <string>

class FragTrap : public ClapTrap
{

	public:

		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap();

		FragTrap& operator=(FragTrap const & rhs);

		void attack(std::string const & target);
		void highFivesGuys(void);

};

#endif /* ******************************************************** FRAGTRAP_H */
