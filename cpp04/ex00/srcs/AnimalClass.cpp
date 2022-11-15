/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnimalClass.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:03:32 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/15 22:31:55 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.hpp"

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

void	Animal::makeSound(void)
{
	std::cout << "Cats don't bark" << std::endl;
}