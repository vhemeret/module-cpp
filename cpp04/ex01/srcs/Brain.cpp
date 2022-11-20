/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 00:45:13 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/20 01:27:10 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/Header.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
	*(this->_ideas) = *(src._ideas);
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain	&Brain::operator=(Brain const &src)
{
	if (this != &src)
		*(this->_ideas) = *(src._ideas);
	return *this;
}

