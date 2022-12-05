/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:14:59 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/04 18:55:29 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/convert.hpp"
#include <stdio.h>

convert::convert(std::string value) : _value(value), _char(false), _int(false), _double(false), _float(false)
{
	return;
}

convert::convert(convert const &src)
{
	*this = src;
	return;
}

convert::~convert(void)
{
	return;
}

convert	&convert::operator=(convert const &src)
{
	if (this != &src)
	{
		this->_value = src._value;
		this->_char = src._char;
		this->_int = src._int;
		this->_double = src._double;
		this->_float = src._float;
	}
	return (*this);
}

void	convert::findType(void)
{
	int 	lenght = this->_value.length();
	bool	point = false;
	long	nb;
	int		i = 0;
	// bool	f = false;
	
	if (!this->_value.compare("nan") || !this->_value.compare("nanf")
		|| !this->_value.compare("+inf") || !this->_value.compare("-inf"))
	{
		this->_float = true;
		this->_double = true;
		return;
	}
	if (lenght == 1 && isalpha(this->_value[0]))
	{
		this->_char = true;
		return;
	}
	else if (lenght > 1)
	{
		if (this->_value[0] == '+' || this->_value[0] == '-' || isdigit(this->_value[0]) || this->_value[0] == '.') // check if valid number
		{
			if (this->_value[i] == '.' && point == false)
					point = true;
			while (++i < lenght - 1)
			{
				if (this->_value[i] == '.' && point == false)
					point = true;
				else if (this->_value[i] == '.' && point == true)
					return;
				else if (!isdigit(this->_value[i]))
					return;
			}
		}
		if (isdigit(this->_value[i]) && point == true) // its's double
		{
			this->_double = true;
			return;
		}
		else if (this->_value[i] == 'f') // it's float
		{
			this->_float = true;
			return;
		}
		else // it's int
		{
			nb = strtol(this->_value.c_str(), NULL, 10);
			if (nb > INT_MAX || nb < INT_MIN || !isdigit(this->_value[i]))
				return;
			else
				this->_int = true;
		}
	}
}

void convert::display(void)
{
	std::cout << "char: " << this->_char << std::endl; 
	std::cout << "int: " << this->_int << std::endl; 
	std::cout << "double: " << this->_double << std::endl; 
	std::cout << "float: " << this->_float << std::endl; 
}

// std::ostream	&operator<<(std::ostream os, convert const &src)
// {
// 	return (os);
// }