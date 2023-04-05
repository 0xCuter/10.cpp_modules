/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:30:29 by scuter            #+#    #+#             */
/*   Updated: 2022/07/18 18:39:04 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <list>

#include "easyfind.hpp"

void print(int i)
{
	std::cout << i << " ";
}

int main(void)
{
	std::vector<int> vector;
	std::list<int> list;

	for (int i = 0; i <= 42; i++)
	{
		vector.push_back(i);
		list.push_back(i);
	}

	try
	{
		std::vector<int>::iterator it_vector = easyfind(vector, 36);
		std::cout << "Remaining vector: ";
		for_each(it_vector, vector.end(), print);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		std::list<int>::iterator it_list = easyfind(list, 31);
		std::cout << "Remaining list: ";
		for_each(it_list, list.end(), print);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		std::list<int>::iterator it_list = easyfind(list, 43);
		std::cout << "Remaining list: ";
		for_each(it_list, list.end(), print);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
