/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 02:02:40 by scuter            #+#    #+#             */
/*   Updated: 2022/07/18 02:09:32 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void swap(T& a, T& b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T const & min(T const & a, T const & b)
{
	if (a < b)
		return a;
	return b;
}

template <typename T>
T const & max(T const & a, T const & b)
{
	if (a > b)
		return a;
	return b;
}

#endif
