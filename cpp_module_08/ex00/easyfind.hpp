/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:30:47 by scuter            #+#    #+#             */
/*   Updated: 2022/07/18 18:26:55 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

class ElementNotFoundException : public std::exception
{
public:
	const char* what() const throw()
	{
		return ("Element not found");
	}
};

template <typename T>
typename T::iterator easyfind(T& container, int toFind)
{
	typename T::iterator it = std::find(container.begin(), container.end(), toFind);
	if (it == container.end())
		throw ElementNotFoundException();
	return it;
}

#endif
