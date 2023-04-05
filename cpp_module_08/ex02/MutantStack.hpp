/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 02:21:48 by scuter            #+#    #+#             */
/*   Updated: 2022/07/19 03:23:51 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() {};
		MutantStack(MutantStack const &src) {*this = src;};
		virtual ~MutantStack() {};

		MutantStack	&operator=(MutantStack const &rhs) {this->c = rhs.c; return *this;};

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

		iterator begin() {return this->c.begin();};
		iterator end() {return this->c.end();};
		reverse_iterator rbegin() {return this->c.rbegin();};
		reverse_iterator rend() {return this->c.rend();};
};

#endif
