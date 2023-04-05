/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 01:19:25 by scuter            #+#    #+#             */
/*   Updated: 2022/07/15 22:29:50 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;
	std::cout << std::endl;


	Animal* animals[10];

	std::cout << std::endl;
	for (int i = 0; i < 6; i++)
	{
		if (i % 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	std::cout << std::endl;
	Cat copy = Cat(*(Cat *)animals[0]);
	std::cout << std::endl;
	copy.makeSound();
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
	{
		std::cout << ((Cat *)animals[0])->getBrain()->getIdea(i) << std::endl;
		std::cout << copy.getBrain()->getIdea(i) << std::endl;
	}
	std::cout << std::endl;
	std::cout << copy.getBrain() << std::endl;
	std::cout << ((Cat *)animals[0])->getBrain() << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 6; i++)
		delete animals[i];
	// system("leaks animals");
}
