/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:36:36 by scuter            #+#    #+#             */
/*   Updated: 2022/07/12 19:27:54 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{

	public:

		Fixed();
		Fixed(int const intValue);
		Fixed(float const floatValue);
		Fixed(Fixed const & src);
		~Fixed();


		Fixed& operator=(Fixed const & rhs);

		bool operator>(Fixed const & rhs) const;
		bool operator<(Fixed const & rhs) const;
		bool operator>=(Fixed const & rhs) const;
		bool operator<=(Fixed const & rhs) const;
		bool operator==(Fixed const & rhs) const;
		bool operator!=(Fixed const & rhs) const;

		Fixed operator+(Fixed const & rhs) const;
		Fixed operator-(Fixed const & rhs) const;
		Fixed operator*(Fixed const & rhs) const;
		Fixed operator/(Fixed const & rhs) const;

		Fixed& operator++(void);
		Fixed& operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);


		int getRawBits(void) const;
		void setRawBits(int const raw);


		float toFloat(void) const;
		int toInt(void) const;

		static Fixed& min(Fixed& a, Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static Fixed const & min(Fixed const & a, Fixed const & b);
		static Fixed const & max(Fixed const & a, Fixed const & b);

	private:

		int _value;
		static const int _bits = 8;

};

std::ostream& operator<<(std::ostream& out, Fixed const & fixed);

#endif /* *********************************************************** FIXED_H */
