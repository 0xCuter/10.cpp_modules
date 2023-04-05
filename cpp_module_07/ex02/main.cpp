/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 02:38:26 by scuter            #+#    #+#             */
/*   Updated: 2022/07/18 03:59:59 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<int> test1;
	try
	{
		std::cout << "Empty array: " << test1[0] << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	Array<int> test2(4);
	test2[3] = 42;
	std::cout << "Unsigned int array: " << std::endl;
	std::cout << "[0]: " << test2[0] << std::endl;
	std::cout << "[1]: " << test2[1] << std::endl;
	std::cout << "[2]: " << test2[2] << std::endl;
	std::cout << "[3]: " << test2[3] << std::endl;
	std::cout << std::endl;


	Array<int> test3(test2);
	std::cout << "[0]: " << test2[0] << std::endl;
	std::cout << "[1]: " << test2[1] << std::endl;
	std::cout << "[2]: " << test2[2] << std::endl;
	std::cout << "[3]: " << test2[3] << std::endl;
	test2[3] = 11;
	std::cout << std::endl;
	std::cout << "test2[3] after change: " << test2[3] << std::endl;
	std::cout << "test3[3] after change: " << test3[3] << std::endl;
	std::cout << std::endl;


	try
	{
		int x = test2[7];
		std::cout << x << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;


	std::cout << "Size of test2: " << test2.size() << std::endl;
}
