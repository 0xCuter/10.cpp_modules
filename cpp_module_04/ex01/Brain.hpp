/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 00:31:16 by scuter            #+#    #+#             */
/*   Updated: 2022/07/15 01:39:19 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{

	public:

		Brain();
		Brain(Brain const & src);
		virtual ~Brain();

		Brain& operator=(Brain const & rhs);

		std::string const & getIdea(int index) const;

	private:

		std::string _ideas[100];

};

#endif /* *********************************************************** BRAIN_H */
