/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 01:54:25 by scuter            #+#    #+#             */
/*   Updated: 2022/07/15 02:05:21 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{

	public:

		Dog();
		Dog(std::string type);
		Dog(Dog const & src);
		virtual ~Dog();

		Dog& operator=(Dog const & rhs);

		void makeSound() const;

		Brain* getBrain() const;

	private:

		Brain* _brain;

};

#endif /* ************************************************************* DOG_H */
