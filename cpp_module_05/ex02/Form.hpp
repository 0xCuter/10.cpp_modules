/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 01:49:19 by scuter            #+#    #+#             */
/*   Updated: 2022/07/16 23:46:29 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	public:

		Form();
		Form(std::string const name, const unsigned int signGrade, const unsigned int execGrade);
		Form(Form const & src);
		virtual ~Form();

		Form& operator=(Form const & rhs);

		std::string getName() const;
		bool isSigned() const;
		unsigned int getSignGrade() const;
		unsigned int getExecGrade() const;

		void beSigned(Bureaucrat const & bureaucrat);
		void validateExec(Bureaucrat const &bureaucrat) const;
		virtual void execute(Bureaucrat const &bureaucrat) const = 0;

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

		class FormNotSignedException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "Form is not signed";
				}
		};

	private:

		std::string const _name;
		bool _signed;
		unsigned int const _signGrade;
		unsigned int const _execGrade;

};

std::ostream& operator<<(std::ostream & o, Form const & i);

#endif /* ************************************************************ FORM_H */
