/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 03:40:11 by vahemere          #+#    #+#             */
/*   Updated: 2022/10/13 18:15:09 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

void	Contact::set_first_name(std::string input)
{
	this->_first_name = input;
}

void	Contact::set_last_name(std::string input)
{
	this->_last_name = input;
}

void	Contact::set_nickname(std::string input)
{
	this->_nickname = input;
}

void	Contact::set_phone_number(std::string input)
{
	this->_phone_number = input;
}

void	Contact::set_darkest_secret(std::string input)
{
	this->_darkest_secret = input;
}
