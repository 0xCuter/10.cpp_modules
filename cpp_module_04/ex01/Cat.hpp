/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 01:54:13 by scuter            #+#    #+#             */
/*   Updated: 2022/07/15 02:05:21 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{

	public:

		Cat();
		Cat(std::string type);
		Cat(Cat const & src);
		virtual ~Cat();

		Cat& operator=(Cat const & rhs);

		void makeSound() const;

		Brain* getBrain() const;

	private:

		Brain* _brain;

};

#endif /* ************************************************************* CAT_H */
