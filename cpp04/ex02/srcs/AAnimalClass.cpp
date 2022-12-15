/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimalClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:03:32 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/07 18:58:27 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Header.hpp"

AAnimal::AAnimal(void) : _type("AAnimal")
{
	std::cout << "AAnimal default constructor called" << std::endl;
	return;
}

AAnimal::AAnimal(AAnimal const &src)
{
	*this = src;
	std::cout << "AAnimal copy constructor called" << std::endl;
	return;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called" << std::endl;
	return;
}

AAnimal	&AAnimal::operator=(AAnimal const &src)
{
	this->_type = src._type;
	return *this;
}

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}
