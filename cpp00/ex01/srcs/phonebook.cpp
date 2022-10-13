/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 03:32:10 by vahemere          #+#    #+#             */
/*   Updated: 2022/10/13 17:56:12 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"

static void phoneboook_menu(void)
{
	std::cout << "ADD : Add someone to the Phonebook." << std::endl;
	std::cout << "SEARCH : Search someone from the Phonebook." << std::endl;
	std::cout << "EXIT : Quit the Phonebook." << std::endl << std::endl;
}

int main (void)
{
	Phonebook	instance;
	std::string input;

	phoneboook_menu();
	while (std::getline(std::cin, input))
	{
		if (input.compare("EXIT") == 0)
			return (0);
		else if (input.compare("ADD") == 0)
			instance.ADD_Contact();
		else if (input.compare("SEARCH") == 0)
			instance.SEARCH_Contact();
		else
		{
			std::cout << std::endl;
			std::cout << "\033[0;31mPlease type : \"ADD\", \"SEARCH\" OR \"EXIT\"\033[0m" << std::endl;
		}
		phoneboook_menu();
	}
	return (0);
}