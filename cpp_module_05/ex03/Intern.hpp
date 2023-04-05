/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 23:29:17 by scuter            #+#    #+#             */
/*   Updated: 2022/07/17 00:20:00 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{

	public:

		Intern();
		Intern(Intern const & src);
		~Intern();

		Intern& operator=(Intern const & rhs);

		Form *makeForm(std::string const & formName, std::string const & target) const;

		void makeCoffee(void) const;

};

#endif /* ********************************************************** INTERN_H */
