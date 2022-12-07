/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:14:59 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/07 19:22:58 by vahemere         ###   ########.fr       */
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
	int 	lenght = this->_value.length();
	bool	point = false;
	long	nb;
	int		i = 0;
	
	if (!this->_value.compare("nan") || !this->_value.compare("nanf")
		|| !this->_value.compare("+inf") || !this->_value.compare("-inf")
		|| !this->_value.compare("+inff") || !this->_value.compare("-inff"))
	{
		this->_float = true;
		this->_double = true;
		return;
	}
	if (lenght == 1 && (isalpha(this->_value[0]) || isprint(this->_value[0])))
	{
		this->_char = true;
		return;
	}
	else if (lenght >= 1)
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
			{
				this->_double = true;
				return;
			}
			else
				this->_int = true;
		}
	}
}

void	convert::to_char(void)
{
	char	c;

	c = this->_value[0];
	if (c < CHAR_MIN || c > CHAR_MAX)
		std::cout << "char: impossible" << std::endl; 
	else	
		(c > 32 && c < CHAR_MAX) ? std::cout << "char: " << c << std::endl : std::cout << "char: not displayable" << std::endl; 
	std::cout << "int: " << static_cast<int>(c) << std::endl; 
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl; 
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl; 
}

void	convert::to_int(void)
{
	int	nb;

	nb = atoi(this->_value.c_str());
	if (nb < CHAR_MIN || nb > CHAR_MAX)
		std::cout << "char: impossible" << std::endl; 
	else	
		(nb > 32 && nb < CHAR_MAX) ? std::cout << "char: " << static_cast<char>(nb) << std::endl : std::cout << "char: not displayable" << std::endl;
	std::cout << "int: " << nb << std::endl; 
	std::cout << "float: " << static_cast<float>(nb) << ".0f" << std::endl; 
	std::cout << "double: " << static_cast<double>(nb) << ".0" << std::endl;
	
}

void	convert::to_double(void)
{
	double	nb;

	nb = strtod(this->_value.c_str(), NULL);
	if (static_cast<int>(nb) < CHAR_MIN || static_cast<int>(nb) > CHAR_MAX)
		std::cout << "char: impossible" << std::endl; 
	else	
		(static_cast<int>(nb) > 32 && static_cast<int>(nb) < CHAR_MAX) ? std::cout << "char: " << static_cast<char>(nb) << std::endl : std::cout << "char: not displayable" << std::endl;
	(static_cast<long long>(nb) > INT_MIN && static_cast<long long>(nb) < INT_MAX) ? std::cout << "int: " << static_cast<int>(nb) << std::endl : std::cout << "int: impossible" << std::endl;
	(nb == static_cast<int>(nb)) ? std::cout << "float: " << static_cast<float>(nb) << ".0f" << std::endl : std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
	(nb == static_cast<int>(nb)) ? std::cout << "double: " << nb << ".0" << std::endl : std::cout << "double " << nb << std::endl;
}

void	convert::to_float(void)
{
	float	nb;

	nb = strtof(this->_value.c_str(), NULL);
	if (static_cast<int>(nb) < CHAR_MIN || static_cast<int>(nb) > CHAR_MAX)
		std::cout << "char: impossible" << std::endl; 
	else	
		(static_cast<int>(nb) > 32 && static_cast<int>(nb) < CHAR_MAX) ? std::cout << "char: " << static_cast<char>(nb) << std::endl : std::cout << "char: not displayable" << std::endl;
	(static_cast<long>(nb) > INT_MIN && static_cast<long>(nb) < INT_MAX) ? std::cout << "int: " << static_cast<int>(nb) << std::endl : std::cout << "int: impossible" << std::endl; 
	(nb == static_cast<int>(nb)) ? std::cout << "float: " << static_cast<float>(nb) << ".0f" << std::endl : std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
	(nb == static_cast<int>(nb)) ? std::cout << "double: " << nb << ".0" << std::endl : std::cout << "double " << nb << std::endl;
	
}

void	convert::to_spec(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (!this->_value.compare("nanf") || !this->_value.compare("+inff") || !this->_value.compare("-inff"))
	{
		std::cout << "float: " << this->_value << std::endl;
		std::cout << "double: " << this->_value.substr(0, (this->_value.length() - 1)) << std::endl;
	}
	else
	{
		std::cout << "float: " << this->_value << "f" << std::endl;
		std::cout << "double: " << this->_value << std::endl;
	}
}

void convert::converter(void)
{
	if (this->_char == true)
		return (to_char());
	else if (this->_int == true)
		return (to_int());
	else if (this->_float == true && this->_double == true)
		return (to_spec());
	else if (this->_double == true)
		return (to_double());
	else if (this->_float == true)
		return (to_float());
	else
		std::cout << "impossible to convert." << std::endl;
}
