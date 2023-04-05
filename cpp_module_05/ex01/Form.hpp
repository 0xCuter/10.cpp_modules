/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 01:49:19 by scuter            #+#    #+#             */
/*   Updated: 2022/07/16 16:47:46 by scuter           ###   ########.fr       */
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
		Form(std::string const name, unsigned int const signGrade, unsigned int const execGrade);
		Form(Form const & src);
		~Form();

		Form& operator=(Form const & rhs);

		std::string getName() const;
		bool isSigned() const;
		unsigned int getSignGrade() const;
		unsigned int getExecGrade() const;

		void beSigned(Bureaucrat const & bureaucrat);

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
		bool _signed;
		unsigned int const _signGrade;
		unsigned int const _execGrade;

};

std::ostream& operator<<(std::ostream & o, Form const & i);

#endif /* ************************************************************ FORM_H */
