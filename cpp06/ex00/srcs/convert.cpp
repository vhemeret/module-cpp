/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:14:59 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/02 18:33:20 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/convert.hpp"

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
	
	if (this->_value.length() == 1 && isalpha(this->_value[0]))
	{
		this->_char = true;
		return;
	}
	else
	// 	std::cout << "c'est un char." << std::endl;
	// else
	// 	std::cout << "pas char " << std::endl;
}

// std::ostream	&operator<<(std::ostream os, convert const &src)
// {
// 	return (os);
// }