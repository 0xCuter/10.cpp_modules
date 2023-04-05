/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 02:18:06 by scuter            #+#    #+#             */
/*   Updated: 2022/07/18 02:36:41 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void iter(T* array, size_t len, void (*f)(T const &))
{
	for(size_t i = 0; i < len; i++)
	{
		f(array[i]);
	}
}

template <typename T>
void print(T const & data)
{
	std::cout << data << std::endl;
}

#endif
