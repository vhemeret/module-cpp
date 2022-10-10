/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 03:37:25 by vahemere          #+#    #+#             */
/*   Updated: 2022/10/10 03:57:50 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"

Phonebook::Phonebook(void): _i(0)
{
	return;
}

Phonebook::~Phonebook(void)
{
	return;
}

void	Phonebook::ADD_Contact(void)
{
	std::string	input;
	int			set = 0;

	if (this->_i == 8)
		this->_i = 0;	
	while (set < 5)
	{
		std::cout << std::endl;
		if (set == 0)
		{
			std::cout << "First Name: " << std::endl;
			std::cin >> input;
			if (input.length() == 0)
				break ;
			else
			{
				this->_contact[this->_i].set_first_name(input);
				set++;
			}
		}
		else if (set == 1)
		{
			std::cout << "Last Name: " << std::endl;
			std::cin >> input;
			if (input.length() == 0)
				break ;
			else
			{
				this->_contact[this->_i].set_last_name(input);
				set++;
			}
		}
		else if (set == 2)
		{
			std::cout << "Nickname: " << std::endl;
			std::cin >> input;
			if (input.length() == 0)
				break ;
			else
			{
				this->_contact[this->_i].set_nickname(input);
				set++;
			}
		}
		else if (set == 3)
		{
			std::cout << "Phone Number: " << std::endl;
			std::cin >> input;
			if (input.length() == 0)
				break ;
			else
			{
				this->_contact[this->_i].set_phone_number(input);
				set++;
			}
		}
		else if (set == 4)
		{
			std::cout << "Darkest Secret: " << std::endl;
			std::cin >> input;
			if (input.length() == 0)
				break ;
			else
			{
				this->_contact[this->_i].set_darkest_secret(input);
				set++;
			}
		}
	}
	this->_i += 1;
}