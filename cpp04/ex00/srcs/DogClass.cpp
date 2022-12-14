/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:05:01 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/19 23:05:32 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Header.hpp"

Dog::Dog(void) : Animal()
{
	this->_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
	return;
}

Dog::Dog(Dog const &src) : Animal(src)
{
	this->_type = src._type;
	std::cout << "Dog copy constructor called" << std::endl;
	return;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	return;
}

Dog	&Dog::operator=(Dog const &src)
{
	this->_type = src._type;
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouaf Wouaf" << std::endl << std::endl;
}