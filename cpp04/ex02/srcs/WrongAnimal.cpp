/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:27:42 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/19 23:20:16 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Header.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	this->_type = src._type;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructor WrongAnimal called" << std::endl;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &src)
{
	this->_type = src._type;
	return *this;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal Sound" << std::endl << std::endl;
}
