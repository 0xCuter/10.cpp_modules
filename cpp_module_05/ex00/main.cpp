/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 23:59:12 by scuter            #+#    #+#             */
/*   Updated: 2022/07/16 01:44:41 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat Alice("Alice", 2);

	try
	{
		std::cout << Alice << std::endl;
		Alice.promote();
		std::cout << Alice << std::endl;
		Alice.promote();
		std::cout << Alice << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	Bureaucrat Bob("Bob", 149);

	try
	{
		std::cout << Bob << std::endl;
		Bob.downgrade();
		std::cout << Bob << std::endl;
		Bob.downgrade();
		std::cout << Bob << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
