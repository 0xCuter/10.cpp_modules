/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:15:34 by scuter            #+#    #+#             */
/*   Updated: 2022/07/17 18:16:55 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	switch (rand() % 3)
	{
		case 0:
			std::cout << "Type A generated" << std::endl;
			return new A();
		case 1:
			std::cout << "Type B generated" << std::endl;
			return new B();
		case 2:
			std::cout << "Type C generated" << std::endl;
			return new C();
	}
	return (NULL);
}

void identify(Base* p)
{
	std::cout << "Identify pointer: ";
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "undefined type" << std::endl;
}

void identify(Base& p)
{
	std::cout << "Identify reference: ";
	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
	else
		std::cout << "undefined type" << std::endl;
}

int main(void)
{
	srand(time(NULL));
	Base *ptr;

	for (int i = 0; i < 3; i++)
	{
		ptr = generate();
		identify(ptr);
		identify(*ptr);
		delete ptr;
	}
	std::cout << std::endl;

	ptr = new Base;
	identify(ptr);
	identify(*ptr);
	delete ptr;
}
