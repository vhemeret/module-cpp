/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:57:52 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/14 19:31:12 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const &copy) : _Hit_points(copy._Hit_points), _Energy_points(copy._Energy_points), _Attack_damage(copy._Attack_damage)
{
	this->_Name = copy.getName();
	std::cout << "copy constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string Name) : _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
	this->_Name = Name;
	std::cout << "Name constructor called" << std::endl;
	return;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "destructor called" << std::endl;
	return;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &src)
{
	this->_Name = src.getName();
	return *this;
}

std::string	ClapTrap::getName(void) const
{
	return (this->_Name);
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (this->_Attack_damage);
}

void			ClapTrap::setAttackDamage(unsigned int amount)
{
	this->_Attack_damage = amount;
}

int	ClapTrap::check_status(void)
{
	if (this->_Hit_points == 0 || this->_Energy_points == 0)
	{
		std::cout << "not enough energy or hit points to do this action." << std::endl << std::endl;
		return (0);
	}
	return (1);
}

void	ClapTrap::display_status(void)
{
	std::cout << "Name: " << this->_Name << std::endl;
	std::cout << "Hit point(s): " << this->_Hit_points << std::endl;
	std::cout << "Energy point(s): " << this->_Energy_points << std::endl;
	std::cout << "Attack damage: " << this->_Attack_damage << std::endl << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (!check_status())
		return ;
	std::cout << "ClapTrap " << this->_Name << " attacks ";
	std::cout << target << ", causing " << this->_Attack_damage << " Points of damage!" << std::endl << std::endl;
	this->_Energy_points -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!check_status())
		return ;
	std::cout << "ClapTrap " << this->_Name << " take " << amount << " point(s) of damage" << std::endl << std::endl;
	this->_Hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!check_status())
		return ;
	std::cout << "ClapTrap " << this->_Name << " retake " << amount << " hit points" << std::endl << std::endl;
	this->_Hit_points += amount;
	this->_Energy_points -= 1;
}