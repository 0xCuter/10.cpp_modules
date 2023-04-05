/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 02:50:40 by scuter            #+#    #+#             */
/*   Updated: 2022/07/14 12:33:30 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include <iostream>
# include <string>

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

	public:

		WrongCat();
		WrongCat(std::string type);
		WrongCat(WrongCat const & src);
		virtual ~WrongCat();

		WrongCat& operator=(WrongCat const & rhs);

		void makeSound() const;

};

#endif /* ************************************************************* WRONG_CAT_H */
