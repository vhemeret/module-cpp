/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnimalClass.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:03:32 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/17 17:40:23 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Header.hpp"

Animal::Animal(void) : _type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
	return;
}

Animal::Animal(Animal const &src)
{
	*this = src;
	std::cout << "Animal copy constructor called" << std::endl;
	return;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
	return;
}

Animal	&Animal::operator=(Animal const &src)
{
	this->_type = src._type;
	return *this;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "animal sound" << std::endl << std::endl;
}