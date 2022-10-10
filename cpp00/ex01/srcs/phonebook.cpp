/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 03:32:10 by vahemere          #+#    #+#             */
/*   Updated: 2022/10/08 22:25:07 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"

static void phoneboook_menu(void)
{
	std::cout << "ADD : Add someone to the Phonebook." << std::endl;
	std::cout << "SEARCH : Search someone from the Phonebook." << std::endl;
	std::cout << "EXIT : Quit the Phonebook." << std::endl;
}

int main (void)
{
	std::string input = " ";

	phoneboook_menu();
	while (input.compare("EXIT") != 0)
	{
		if (input.compare("ADD") == 0)
		{
			
			// add new user
		}
		else if (input.compare("SEARCH") == 0)
		{
			
			// search user
		}
		else
		{
			std::cout << std::endl;
			std::cout << "Please type : \"ADD\", \"SEARCH\" OR \"EXIT\"" << std::endl;
			phoneboook_menu();
		}
	}
	return (0);
}