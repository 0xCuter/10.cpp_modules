/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 02:14:26 by scuter            #+#    #+#             */
/*   Updated: 2022/07/18 02:36:15 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int arr1[6] = {3, 9, 4, 4, 1, 8};
	iter(arr1, 6, print);
	std::cout << std::endl;

	char arr2[3] = {'a', 'b', 'c'};
	iter(arr2, 3, print);
	std::cout << std::endl;

	double arr3[4] = {4.2, 1.414213562, 3.14, 9.8};
	iter(arr3, 4, print);
	std::cout << std::endl;

	std::string arr4[] = {"One", "Two", "Three", "Four"};
	iter(arr4, 4, print);
	std::cout << std::endl;
}
