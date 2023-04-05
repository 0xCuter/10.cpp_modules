/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:20:10 by scuter            #+#    #+#             */
/*   Updated: 2022/07/07 00:33:07 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phonebook;
	std::string cmd;

	while (cmd.compare("EXIT") != 0)
	{
		std::cout << "Enter a command [ADD/SEARCH/EXIT]: ";
		std::getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0)
		{
			phonebook.addContact();
		}
		else if (cmd.compare("SEARCH") == 0)
		{
			phonebook.searchContact();
		}
	}
	return (0);
}
