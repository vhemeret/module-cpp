/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:05:47 by vahemere          #+#    #+#             */
/*   Updated: 2022/10/24 17:05:47 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Zombie.hpp"

int	check_input(std::string input)
{
	if (input.empty())
		return (0);
	for (int i = 0; input[i]; i++)
	{
		if (!std::isdigit(input[i]))
		{
			std::cout << "Please type only digits" << std::endl;
			return (0);
		}
	}
	return (1);
}

int	main(void)
{
	std::string	input;
	int			N;

	while (1)
	{
		std::cout << "How many zombie do you want ?";
		getline(std::cin, input);
		if (std::cin.eof())
			return (0);
		if (!check_input(input))
			continue ;
		N = atoi(static_cast<char const *>(input.c_str()));
		break;
	}
	Zombie *zombie = zombieHorde(N, "Zombie_clone");
	delete [] zombie;
}
