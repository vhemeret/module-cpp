/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:40:38 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/15 19:13:40 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->_Name = "Random";
	this->_Hit_points = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
	std::cout << "Default FragTrap constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string Name)
{
	this->_Name = Name;
	this->_Hit_points = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
	std::cout << "Constructor FragTrap parametric called" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;
	std::cout << "Constructor FragTrap copy called" << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor FragTrap called" << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=(FragTrap const &src)
{
	this->_Name = src.getName();
	this->_Hit_points = src._Hit_points;
	this->_Energy_points = src._Hit_points;
	this->_Attack_damage = src._Attack_damage;
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->_Name << " Need High Fives !!" << std::endl;
}