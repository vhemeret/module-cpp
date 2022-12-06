/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:55:44 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/06 15:08:58 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	std::string	filename;
	std::string	line;
	std::string	s1;
	std::string	s2;
	size_t		pos;

	if (ac == 4)
	{
		filename = av[1];
		s1 = av[2];
		s2 = av[3];
		if (filename.empty() || s1.empty() || s2.empty())
		{
			std::cout << "Please don't send an empty argument(s)." << std::endl;
			return (0);
		}
		std::ifstream ifs(filename.c_str());
		if (!ifs)
		{
			std::cout << "The input file does not exist." << std::endl;
			return (0);
		}
		std::ofstream ofs(filename.append(".replace").c_str());
		while (getline(ifs, line))
		{
			pos = line.find(s1);
			while (pos != std::string::npos)
			{
				ofs << line.substr(0, pos) + s2;
				line = line.substr(pos + s1.size());
				pos = line.find(s1);
			}
			if (pos == std::string::npos)
				ofs << line << '\n';
		}
		ifs.close();
		ofs.close();
	}
	else
		std::cout << "The number of arguments are invalid. ./replace [file] [string1] [string[2]]" << std::endl;
	return (0);
}