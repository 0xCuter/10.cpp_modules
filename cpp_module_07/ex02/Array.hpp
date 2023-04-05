/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 02:38:23 by scuter            #+#    #+#             */
/*   Updated: 2022/07/18 03:56:14 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>
class Array
{
	public:
		Array() : _size(0), _array(NULL) {};
		Array(unsigned int n) : _size(n), _array(new T[n]) {};
		Array(const Array& src) : _size(src._size), _array(new T[src._size])
		{
			for (unsigned int i = 0; i < src._size; i++)
				_array[i] = src._array[i];
		}
		virtual ~Array()
		{
			delete [] _array;
		}

		Array<T> & operator=(const Array& rhs)
		{
			if (this != &rhs)
			{
				delete [] _array;
				_size = rhs._size;
				_array = new T[_size];
				for (unsigned int i = 0; i < rhs._size; i++)
					_array[i] = rhs._array[i];
			}
			return *this;
		}

		class OutOfRangeException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Index is out of bounds");
				}
		};

		T& operator[](unsigned int const index) const
		{
			if (index >= _size)
				throw OutOfRangeException();
			return _array[index];
		}

		unsigned int size(void) const
		{
			return _size;
		}

	private:

		unsigned int _size;
		T *_array;

};

#endif
