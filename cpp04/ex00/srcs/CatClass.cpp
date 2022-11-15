/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:04:34 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/15 22:39:55 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
	return;
}

Cat::Cat(Cat const &src)
{
	*this = src;
	std::cout << "Cat copy constructor called" << std::endl;
	return;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	return;
}

Cat	&Cat::operator=(Cat const &src)
{
	this->_type = src._type;
	return *this;
}