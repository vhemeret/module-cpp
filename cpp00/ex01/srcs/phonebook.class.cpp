/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 03:37:25 by vahemere          #+#    #+#             */
/*   Updated: 2022/10/12 17:36:46 by vahemere         ###   ########.fr       */
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

std::string	ask_first_name(void)
{
	std::string	input;

	std::cout << "First Name: " << std::endl;
	std::cin >> input;
	if (input.length() == 0)
	{
		while (input.length() == 0)
		{
			std::cout << "Please type your first name." << std::endl;
			std::cout << "First Name: " << std::endl;
			std::cin >> input;
		}
	}
	std::cout << std::endl << std::endl;
	return (input);
}

std::string	ask_last_name(void)
{
	std::string input;

	std::cout << "Last Name: " << std::endl;
	std::cin >> input;
	if (input.length() == 0)
	{
		while (input.length() == 0)
		{
			std::cout << "Please type your last name." << std::endl;
			std::cout << "Last Name: " << std::endl;
			std::cin >> input;
		}
	}
	std::cout << std::endl << std::endl;
	return (input);
}

std::string	ask_nickname(void)
{
	std::string input;

	std::cout << "Nickname: " << std::endl;
	std::cin >> input;
	if (input.length() == 0)
	{
		while (input.length() == 0)
		{
			std::cout << "Please type your Nickname." << std::endl;
			std::cout << "Nickname: " << std::endl;
			std::cin >> input;
		}
	}
	std::cout << std::endl << std::endl;
	return (input);
}

long	ask_phone_number(void)
{
	long input;

	std::cout << "Phone Number: " << std::endl;
	std::cin >> input;
	if (!isdigit((int)input))
	{
		while (!isdigit((int)input))
		{
			std::cout << "Please type your Phone Number." << std::endl;
			std::cout << "Phone Number: " << std::endl;
			std::cin >> input;
		}
	}
	std::cout << std::endl << std::endl;
	return (input);
}

std::string	ask_darkest_secret(void)
{
	std::string input;

	std::cout << "Darkest Secret: " << std::endl;
	std::cin >> input;
	if (input.length() == 0)
	{
		while (input.length() == 0)
		{
			std::cout << "Please type your Darkest Secret" << std::endl;
			std::cout << "Darkest Secret: " << std::endl;
			std::cin >> input;
		}
	}
	std::cout << std::endl << std::endl;
	return (input);
}

void	Phonebook::ADD_Contact(void)
{
	std::string	input;
	long		digits_input;
	// int			index = 0;

	if (this->_i == 8)
		this->_i = 0;
	input = ask_first_name();
	this->_contact[this->_i].set_first_name(input);
	input = ask_last_name();
	this->_contact[this->_i].set_last_name(input);
	input = ask_nickname();
	this->_contact[this->_i].set_nickname(input);
	digits_input = ask_phone_number();
	this->_contact[this->_i].set_phone_number(digits_input);
	input = ask_darkest_secret();
	this->_contact[this->_i].set_darkest_secret(input);
	this->_i += 1;
}

void	Phonebook::SEARCH_Contact(void)
{
	int			index_contact;
	static int	display = 0;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string phone_number;
	std::string darkest_secret;
	
	if (display == 0)
	{
		std::cout << " ------------------------------------------- " << std::endl;
		std::cout << "| index | First Name | Last Name | Nickname |" << std::endl;
		std::cout << " ------------------------------------------- " << std::endl;
		display++;
	}
	std::cout << "Put index of contact: ";
	std::cin >> index_contact;
	if (isdigit(index_contact))
	{
		if (index_contact >= 0 && index_contact <= 8)
		{
			std::cout << "index found" << std::endl;
		}
		else
			SEARCH_Contact();
	}
	else
		SEARCH_Contact();
	// std::cout << "Do you want to see another contact ? (type: yes/no)" << std::endl;
}