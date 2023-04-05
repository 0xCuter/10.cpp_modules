/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 04:17:35 by scuter            #+#    #+#             */
/*   Updated: 2022/07/17 04:39:07 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main(void)
{
	Data *input = new Data;
	Data		*output;
	uintptr_t	raw;
	input->data1 = "Sheeeesh";
	input->data2 = 42;
	raw = serialize(input);
	output = deserialize(raw);
	std::cout << output->data1 << std::endl;
	std::cout << output->data2 << std::endl;
}
