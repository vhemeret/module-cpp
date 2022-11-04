/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:17:20 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/04 18:53:43 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->_n = nb << _nbits;
	return ;
}

Fixed::Fixed(float const nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->_n = roundf(nb * (1 << _nbits));
	return ;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "copy constructor called" << std::endl;
	this->_n = copy.getRawBits();
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

				/* Member function */

int	Fixed::toInt(void) const
{
	return (this->_n >> _nbits);
}

float Fixed::toFloat(void) const
{
	return ((float)this->_n / (float)(1 << _nbits));
}

int	&Fixed::min(int &n1, int &n2)
{
	if (n1 < n2)
		return (n1);
	else if (n1 > n2)
		return (n2);
	return (n1);
}

int	const &Fixed::min(const int &n1, const int &n2)
{	
	if (n1 < n2)
		return (n1);
	else if (n1 > n2)
		return (n2);
	return (n1);
}

int	&Fixed::max(int &n1, int &n2)
{
	if (n1 < n2)
		return (n2);
	else if (n1 > n2)
		return (n1);
	return (n1);
}

int	const &Fixed::max(const int &n1, const int &n2)
{
	if (n1 < n2)
		return (n2);
	else if (n1 > n2)
		return (n1);
	return (n1);
}

int	Fixed::getRawBits(void) const
{
	return (this->_n);
}

void	Fixed::setRawBits(int const raw)
{
	this->_n = raw;
}

				/* Operator */

Fixed	&Fixed::operator=(Fixed const &src)
{
	this->_n = src.getRawBits();
	return *this;
}

Fixed	&Fixed::operator>(Fixed const &src)
{
	// return (*this->toFloat() > src.toFloat());
}

std::ostream &operator<<(std::ostream &os, Fixed const &src)
{
	return (os << src.toFloat());
}
