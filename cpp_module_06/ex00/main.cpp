/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 02:14:09 by scuter            #+#    #+#             */
/*   Updated: 2022/07/17 04:14:46 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <limits>
#include <iomanip>

static bool isChar(char *endptr, char *argv)
{
	std::string str = argv;
	if (endptr == argv && str.length() == 1)
		return true;
	return false;
}

static bool isNaN(char *endptr)
{
	std::string endstr = endptr;
	if ((*endptr != 0 && *endptr != 'f') || endstr.length() > 1)
		return true;
	return false;
}

static void printChar(char c, double d)
{
	std::cout << "char: ";
	if (d < 0 || d > CHAR_MAX || std::isnan(d))
		std::cout << "impossible";
	else if (c < 32 && c >= 0)
		std::cout << "Non displayable";
	else
		std::cout << "'" << c << "'";
	std::cout << std::endl;
}

static void printInt(int i, double d)
{
	std::cout << "int: ";
	if (d > INT_MAX || d < INT_MIN || std::isnan(d))
		std::cout << "impossible";
	else
		std::cout << i;
	std::cout << std::endl;
}

static void printFloat(float f)
{
	std::cout << "float: ";
	double intPart;
	if (modf(f, &intPart) == 0)
			std::cout << std::setprecision(1);
	std::cout << std::fixed << f << "f" << std::endl;
}

static void printDouble(double d)
{
	std::cout << "double: ";
	double intPart;
	if (modf(d, &intPart) == 0)
		std::cout << std::setprecision(1);
	std::cout << std::fixed << d << std::endl;
}

int main(int argc, char **argv)
{
	if (argc != 2 || !argv[1][0])
	{
		std::cerr << "Invalid input. Usage: ./convert <value>" << std::endl;
		return 1;
	}

	char *endptr;
	double d = std::strtod(argv[1], &endptr);
	if (isChar(endptr, argv[1]))
		d = static_cast<double>(argv[1][0]);
	else if (isNaN(endptr))
		d = static_cast<double>(NAN);
	char c = static_cast<char>(d);
	int i = static_cast<int>(d);
	float f = static_cast<float>(d);
	printChar(c, d);
	printInt(i, d);
	printFloat(f);
	printDouble(d);
}
