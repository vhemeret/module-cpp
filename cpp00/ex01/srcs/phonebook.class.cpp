/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 03:37:25 by vahemere          #+#    #+#             */
/*   Updated: 2022/10/13 18:09:20 by vahemere         ###   ########.fr       */
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

int	check_string_digits(std::string str)
{
	int				i = -1;
	unsigned long	size = 0;
	
	size = str.size();
	if (size)
	{
		while ((unsigned long)++i < size)
			if (!std::isdigit(str.at(i)))
				return (0);
		return (1);
	}
	return (0);
}

std::string	ask_first_name(void)
{
	std::string	input;

	std::cout << "\033[0;36mFirst Name: \033[0m";
	while (std::getline(std::cin, input))
	{
		if (input.length() == 0)
		{
			std::cout << "\033[0;31mPlease type you first name.\033[0m" << std::endl;
			std::cout << "\033[0;36mFirst Name: \033[0m";
		}
		else
		{
			std::cout << std::endl;
			return (input);
		}
	}
	return (NULL);
}

std::string	ask_last_name(void)
{
	std::string	input;

	std::cout << "\033[0;36mLast Name: \033[0m";
	while (std::getline(std::cin, input))
	{
		if (input.length() == 0)
		{
			std::cout << "\033[0;31mPlease type you last name.\033[0m" << std::endl;
			std::cout << "\033[0;36mLast Name: \033[0m";
		}
		else
		{
			std::cout << std::endl;
			return (input);
		}
	}
	return (NULL);
}

std::string	ask_nickname(void)
{
	std::string	input;

	std::cout << "\033[0;36mNickname: \033[0m";
	while (std::getline(std::cin, input))
	{
		if (input.length() == 0)
		{
			std::cout << "\033[0;31mPlease type you nickname.\033[0m" << std::endl;
			std::cout << "\033[0;36mNickname: \033[0m";
		}
		else
		{
			std::cout << std::endl;
			return (input);
		}
	}
	return (NULL);
}

std::string	ask_phone_number(void)
{
	std::string	input;

	std::cout << "\033[0;36mPhone Number: \033[0m";
	while (std::getline(std::cin, input))
	{
		if (!check_string_digits(input))
		{
			std::cout << "\033[0;31mPlease type a correct phone number.\033[0m" << std::endl;
			std::cout << "\033[0;36mPhone Number: \033[0m";
		}
		else
		{
			std::cout << std::endl;
			return (input);
		}
	}
	return (NULL);
}

std::string	ask_darkest_secret(void)
{
	std::string	input;

	std::cout << "\033[0;36mDarkest Secret: \033[0m";
	while (std::getline(std::cin, input))
	{
		if (input.length() == 0)
		{
			std::cout << "\033[0;31mPlease type you darkest secret.\033[0m" << std::endl;
			std::cout << "\033[0;36mDarkest Secret: \033[0m";
		}
		else
			return (input);
	}
	return (NULL);
}

void	Phonebook::ADD_Contact(void)
{
	std::string	input;

	if (this->_i == 7)
		this->_i = 0;
	input = ask_first_name();
	this->_contact[this->_i].set_first_name(input);
	input = ask_last_name();
	this->_contact[this->_i].set_last_name(input);
	input = ask_nickname();
	this->_contact[this->_i].set_nickname(input);
	input = ask_phone_number();
	this->_contact[this->_i].set_phone_number(input);
	input = ask_darkest_secret();
	this->_contact[this->_i].set_darkest_secret(input);
	std::cout << "\033[0;32mContact added.\033[0m" << std::endl << std::endl;
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
	{
		SEARCH_Contact();
		return ;	
	}
	// std::cout << "Do you want to see another contact ? (type: yes/no)" << std::endl;
}