/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:36:36 by scuter            #+#    #+#             */
/*   Updated: 2022/07/11 19:11:53 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{

	public:

		Fixed();
		Fixed(Fixed const & src);
		~Fixed();

		Fixed& operator=(Fixed const & rhs);

		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:

		int _value;
		static const int _bits = 8;

};

#endif /* *********************************************************** FIXED_H */
