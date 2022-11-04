/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:17:20 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/04 16:09:55 by vahemere         ###   ########.fr       */
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

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::toInt(void) const
{
	return (this->_n >> _nbits);
}

float Fixed::toFloat(void) const
{
	return ((float)this->_n / (float)(1 << _nbits));
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "copy constructor called" << std::endl;
	this->_n = copy.getRawBits();
}

Fixed	&Fixed::operator=(Fixed const &src)
{
	this->_n = src.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &os, Fixed const &src)
{
	return (os << src.toFloat());
}

int	Fixed::getRawBits(void) const
{
	return (this->_n);
}

void	Fixed::setRawBits(int const raw)
{
	this->_n = raw;
}