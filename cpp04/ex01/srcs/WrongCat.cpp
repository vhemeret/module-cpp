/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:48:17 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/19 23:20:24 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Header.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "Default constructor WrongCat called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
{
	this->_type = src._type;
	std::cout << "Copy cnstructor WrongCat called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "destructor WrongCat called" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &src)
{
	this->_type = src._type;
	return *this;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow Meow say the WrongCat" << std::endl << std::endl;
}