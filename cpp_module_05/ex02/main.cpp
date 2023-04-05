/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 23:59:12 by scuter            #+#    #+#             */
/*   Updated: 2022/07/16 20:23:23 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat president("President", 1);
	Bureaucrat ceo("CEO", 10);
	Bureaucrat chief("Chief", 50);
	Bureaucrat worker("Worker", 150);

	Form *shrubber = new ShrubberyCreationForm("Home");
	Form *robotomy = new RobotomyRequestForm("Bender");
	Form *presidential = new PresidentialPardonForm("Felon");

	worker.executeForm(*shrubber);
	president.signForm(*shrubber);
	worker.executeForm(*shrubber);
	chief.executeForm(*shrubber);

	std::cout << std::endl;
	chief.executeForm(*robotomy);
	ceo.signForm(*robotomy);
	chief.executeForm(*robotomy);
	ceo.executeForm(*robotomy);

	std::cout << std::endl;
	ceo.executeForm(*presidential);
	ceo.signForm(*presidential);
	ceo.executeForm(*presidential);
	president.executeForm(*presidential);

	delete shrubber;
	delete robotomy;
	delete presidential;
	return 0;
}
