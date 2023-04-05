/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 23:59:12 by scuter            #+#    #+#             */
/*   Updated: 2022/07/17 00:28:31 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Bureaucrat president("President", 1);
	Bureaucrat ceo("CEO", 10);
	Bureaucrat chief("Chief", 50);
	Bureaucrat worker("Worker", 150);
	Intern intern;

	Form *shrubber = intern.makeForm("shrubbery creation", "Home");
	Form *robotomy = intern.makeForm("robotomy request", "Beller");
	Form *presidential = intern.makeForm("presidential pardon", "Felon");
	intern.makeForm("undefined", "undefined");
	std::cout << std::endl;

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
	std::cout << std::endl;

	intern.makeCoffee();
	std::cout << std::endl;

	delete shrubber;
	delete robotomy;
	delete presidential;
	return 0;
}
