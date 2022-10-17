/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 03:37:25 by vahemere          #+#    #+#             */
/*   Updated: 2022/10/17 17:22:18 by vahemere         ###   ########.fr       */
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
	return ("");
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
	return ("");
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
	return ("");
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
	return ("");
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
	return ("");
}

int	Phonebook::ADD_Contact(void)
{
	int			i;
	static int	call = 0;
	std::string	input;

	i = this->_i;
	if (call >= 8)
	{
		this->_i = 8;
		i = 0;
	}
	else
		this->_i++;
	input = ask_first_name();
	if (input.empty())
		return (0);
	else
		this->_contact[i].set_first_name(input);
	input = ask_last_name();
	if (input.empty())
		return (0);
	else
		this->_contact[i].set_last_name(input);
	input = ask_nickname();
	if (input.empty())
		return (0);
	else
		this->_contact[i].set_nickname(input);
	input = ask_phone_number();
	if (input.empty())
		return (0);
	else
		this->_contact[i].set_phone_number(input);
	input = ask_darkest_secret();
	if (input.empty())
		return (0);
	else
		this->_contact[i].set_darkest_secret(input);
	std::cout << "\033[0;32mContact added.\033[0m" << std::endl << std::endl;
	call++;
	return (1);
}

int	Phonebook::SEARCH_Contact(void)
{
	std::string	input;
	int			contact = 0;
	
/*==================================== DISPLAY PHONEBOOK SUMMARY ==========================================*/
	
	if (this->_i == 0)
	{
		std::cout << "\033[0;31mEmpty Phonebook. \033[0m" << std::endl;
		return (1);
	}
	std::cout << "\033[0;35m";
	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << " ___________________________________________ " << std::endl;
	for (int i = 0; i < this->_i; i++)
	{
		std::cout << '|';
		std::cout << "         " << i << '|';
		if (this->_contact[i].get_first_name().size() > 10)
			std::cout << this->_contact[i].get_first_name().substr(0, 9) + "." << '|';
		else
			std::cout << std::setw(10) << this->_contact[i].get_first_name() << '|';
		if (this->_contact[i].get_last_name().size() > 10)
			std::cout << this->_contact[i].get_last_name().substr(0, 9) + "." << '|';
		else
			std::cout << std::setw(10) << this->_contact[i].get_last_name() << '|';
		if (this->_contact[i].get_nickname().size() > 10)
			std::cout << this->_contact[i].get_nickname().substr(0, 9) + "." << '|' << std::endl;
		else
			std::cout << std::setw(10) << this->_contact[i].get_nickname() << '|' << std::endl;
		std::cout << " ___________________________________________ " << std::endl;
	}
	std::cout << "\033[0m" << std::endl;
	
/*=========================================================================================================*/

/*========================================= DISPLAY CONTACT ===============================================*/

	std::cout << "\033[0;36mPut index of contact: \033[0m";
	getline(std::cin, input);
	if (std::cin.eof())
		return (0);
	if (!check_string_digits(input) || atoi(const_cast<const char *>(input.c_str())) < 0 || atoi(const_cast<const char *>(input.c_str())) > this->_i - 1)
	{	
		std::cout << "\033[0;31mBad format: please enter a number between 0-" << this->_i - 1 << "\033[0m" << std::endl;
		SEARCH_Contact();
		return (1);
	}
	else
	{
		while (contact < atoi(const_cast<const char *>(input.c_str())))
			contact++;
		std::cout << "\033[0;35m";
		std::cout << "First Name: " << this->_contact[contact].get_first_name() << std::endl;
		std::cout << "Last Name: " << this->_contact[contact].get_last_name() << std::endl;
		std::cout << "Nickname: " << this->_contact[contact].get_nickname() << std::endl;
		std::cout << "Phone Number: " << this->_contact[contact].get_phone_number() << std::endl;
		std::cout << "Darkest Secret: " << this->_contact[contact].get_darkest_secret();
		std::cout << "\033[0m" << std::endl << std::endl;
	}
	std::cout << "Do you want to see another contact ? (yes/no): ";
	getline(std::cin, input);
	if (std::cin.eof())
		return (0);
	if (!strcmp(const_cast<const char *>(input.c_str()), "yes"))
		SEARCH_Contact();
	else
		return (1);
	std::cout << std::endl;
	
/*=========================================================================================================*/

	return (1);
}