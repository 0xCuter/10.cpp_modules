/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:50:17 by scuter            #+#    #+#             */
/*   Updated: 2022/07/07 00:15:38 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{}

Contact::~Contact()
{}


void Contact::setFirstName(std::string name)
{
	_firstName = name;
}

void Contact::setLastName(std::string name)
{
	_lastName = name;
}

void Contact::setNickname(std::string name)
{
	_nickname = name;
}

void Contact::setPhoneNumber(std::string num)
{
	_phoneNumber = num;
}

void Contact::setDarkestSecret(std::string secret)
{
	_darkestSecret = secret;
}



std::string Contact::getFirstName(void) const
{
	return (_firstName);
}

std::string Contact::getLastName(void) const
{
	return (_lastName);
}

std::string Contact::getNickname(void) const
{
	return (_nickname);
}

std::string Contact::getPhoneNumber(void) const
{
	return (_phoneNumber);
}

std::string Contact::getDarkestSecret(void) const
{
	return (_darkestSecret);
}
