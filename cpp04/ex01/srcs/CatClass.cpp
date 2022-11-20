/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:04:34 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/20 01:13:35 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/CatClass.hpp"

Cat::Cat(void) : Animal()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
	return;
}

Cat::Cat(Cat const &src) : Animal(src)
{
	this->_type = src._type;
	std::cout << "Cat copy constructor called" << std::endl;
	return;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
	return;
}

Cat	&Cat::operator=(Cat const &src)
{
	this->_type = src._type;
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow Meow" << std::endl << std::endl;
}