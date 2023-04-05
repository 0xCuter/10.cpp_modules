/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 01:49:26 by scuter            #+#    #+#             */
/*   Updated: 2022/07/16 18:18:36 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

# include "Form.hpp"

class Form;

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat(std::string const name, unsigned int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat();

		Bureaucrat& operator=(Bureaucrat const & rhs);

		std::string const getName() const;
		unsigned int getGrade() const;

		void promote();
		void downgrade();

		void signForm(Form& form) const;
		void executeForm(Form const & form) const;

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "Grade is too high";
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "Grade is too low";
				}
		};

	private:

		std::string const _name;
		unsigned int _grade;

};

std::ostream& operator<<(std::ostream& o, Bureaucrat const & i);

#endif /* ****************************************************** BUREAUCRAT_H */
