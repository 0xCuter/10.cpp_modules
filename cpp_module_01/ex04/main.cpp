/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scuter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:00:28 by scuter            #+#    #+#             */
/*   Updated: 2022/07/08 18:08:22 by scuter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <sstream>

int replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream source(filename.c_str());
	if (!source.is_open())
	{
		std::cerr << "Error: coudln't open source file." << std::endl;
		return (1);
	}
	std::ofstream target(filename.append(".replace").c_str());
	if (!target.is_open())
	{
		std::cerr << "Error: couldn't create target file." << std::endl;
		source.close();
		return (1);
	}
	std::stringstream stream;
	stream << source.rdbuf();
	if (!stream)
	{
		std::cerr << "Error: couldn't read source file." << std::endl;
		source.close();
		target.close();
		return (1);
	}
	std::string buff = stream.str();
	std::string text;
	std::size_t found = buff.find(s1);
	while (found != std::string::npos)
	{
		text.append(buff.substr(0, found));
		text.append(s2);
		buff = buff.substr(found + s1.size(), buff.size());
		found = buff.find(s1);
	}
	text.append(buff);
	target << text;
	target.close();
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error: check your arguments." << std::endl;
		return (1);
	}
	if (replace(argv[1], argv[2], argv[3]))
		return (1);
	return (0);
}
