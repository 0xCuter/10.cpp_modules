/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:48:32 by scuter            #+#    #+#             */
/*   Updated: 2022/07/19 02:00:00 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>

class Span
{

	public:

		Span();
		Span(unsigned int const N);
		Span( Span const & src );
		~Span();

		Span& operator=(Span const & rhs);

		void addNumber(int x);
		unsigned int shortestSpan(void) const;
		unsigned int longestSpan(void) const;
		void fill(std::vector<int>::iterator const & start, std::vector<int>::iterator const & end);

		class ContainerFullException : public std::exception
		{
		public:
			const char* what() const throw()
			{
				return ("Container is full");
			}
		};

		class ContainerTooSmallException : public std::exception
		{
		public:
			const char* what() const throw()
			{
				return ("Container has less than 2 elements");
			}
		};

	private:

		unsigned int _size;
		std::vector<int> _v;

};

#endif /* ************************************************************ SPAN_H */
