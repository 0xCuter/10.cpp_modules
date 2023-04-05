/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:26:12 by scuter            #+#    #+#             */
/*   Updated: 2022/07/08 19:31:42 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

int	main(void)
{
	Harl harl;

	std::cout << "[DEBUG]: " << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "[INFO]: " << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;

	std::cout << "[WARNING]: " << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;

	std::cout << "[ERROR]: " << std::endl;
	harl.complain("ERROR");
}
