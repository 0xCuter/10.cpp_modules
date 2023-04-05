/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:30:32 by scuter            #+#    #+#             */
/*   Updated: 2022/07/07 01:19:56 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc > 1)
		for (int i = 1; i < argc; i++)
		{
			std::string str = argv[i];
			for (int j = 0; j < (int)str.length(); j++)
				std::cout << (char) std::toupper(str[j]);
		}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return(0);
}
