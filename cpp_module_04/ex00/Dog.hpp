/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 01:54:25 by scuter            #+#    #+#             */
/*   Updated: 2022/07/14 12:33:30 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>

#include "Animal.hpp"

class Dog : public Animal
{

	public:

		Dog();
		Dog(std::string type);
		Dog(Dog const & src);
		virtual ~Dog();

		Dog& operator=(Dog const & rhs);

		void makeSound() const;

};

#endif /* ************************************************************* DOG_H */
