/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:31:49 by scuter            #+#    #+#             */
/*   Updated: 2022/07/07 00:15:38 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>

# include "Contact.hpp"

class PhoneBook
{
	public:

		PhoneBook();
		~PhoneBook();

		void addContact(void);
		void searchContact(void) const;

	private:

		Contact	_contacts[8];
		int		_count;
		int		_index;

		void displayContacts(void) const;
};

#endif
