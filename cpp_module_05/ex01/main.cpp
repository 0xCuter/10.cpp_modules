/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 23:59:12 by scuter            #+#    #+#             */
/*   Updated: 2022/07/16 03:26:40 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		Form form("Form1", 0, 0);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Form form("Form2", 151, 151);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	Bureaucrat alice("Alice", 31);
	Form form("Contract", 30, 30);

	std::cout << form << std::endl;
	alice.signForm(form);
	std::cout << std::endl << form;
	std::cout << std::endl << alice << std::endl;
	alice.promote();
	std::cout << std::endl << alice << std::endl << std::endl;
	alice.signForm(form);
	std::cout << std::endl << form;
}
