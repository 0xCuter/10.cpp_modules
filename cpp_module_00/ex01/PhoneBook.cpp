/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:31:46 by scuter            #+#    #+#             */
/*   Updated: 2022/07/07 00:48:58 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() :
_count(0),
_index(0)
{}

PhoneBook::~PhoneBook()
{}

void PhoneBook::addContact(void)
{
	Contact contact;
	std::string str;

	std::cout << "First name: ";
	std::getline(std::cin, str);
	contact.setFirstName(str);
	std::cout << "Last name: ";
	std::getline(std::cin, str);
	contact.setLastName(str);
	std::cout << "Nickname :";
	std::getline(std::cin, str);
	contact.setNickname(str);
	std::cout << "Phone number: ";
	std::getline(std::cin, str);
	contact.setPhoneNumber(str);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, str);
	contact.setDarkestSecret(str);
	_contacts[_index] = contact;
	_index = (_index + 1) % 8;
	if (_count < 8)
		_count++;
}

std::string truncate(std::string str)
{
	if (str.size() >= 10)
		return (str.substr(0, 9).append("."));
	return (str);
}

void PhoneBook::displayContacts(void) const
{
	std::cout << "╔══════════╦══════════╦══════════╦══════════╗" << std::endl;
	std::cout << "║     index║first name║ last name║  nickname║" << std::endl;
	std::cout << "╠══════════╬══════════╬══════════╬══════════╣" << std::endl;
	for (int i = 0; i < _count; i++)
	{
		if (i)
			std::cout << "╠──────────┼──────────┼──────────┼──────────╣" << std::endl;
		std::cout << "║" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << truncate(_contacts[i].getFirstName());
		std::cout << "|" << std::setw(10) << truncate(_contacts[i].getLastName());
		std::cout << "|" << std::setw(10) << truncate(_contacts[i].getNickname()) << "║" << std::endl;
	}
	std::cout << "╚══════════╩══════════╩══════════╩══════════╝" << std::endl;
}

void PhoneBook::searchContact(void) const
{
	int input;

	if (!_count)
	{
		std::cout << "No Contacts in PhoneBook." << std::endl;
		return ;
	}
	displayContacts();
	std::cout << "Enter an index to view the corresponding contact details: ";
	std::cin >> input;
	while (!input || input < 1 || input > _count)
	{
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << "Invalid input. Enter an index between 1 and " << _count << ": ";
		std::cin >> input;
	}
	input--;
	std::cout << std::endl;
	std::cout << "First name: " << _contacts[input].getFirstName() << std::endl;
	std::cout << "Last name: " << _contacts[input].getLastName() << std::endl;
	std::cout << "Nickname: " << _contacts[input].getNickname() << std::endl;
	std::cout << "Phone number: " << _contacts[input].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << _contacts[input].getDarkestSecret() << std::endl;
	std::cin.ignore(10000, '\n');
}
