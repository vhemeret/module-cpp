/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:36:36 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/10 01:11:01 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_Name = "Random";
	this->_guardGate = 0;
	this->_Hit_points = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
	std::cout << "Default ScavTrap constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string Name)
{
	this->_Name = Name;
	this->_guardGate = 0;
	this->_Hit_points = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
	std::cout << "Constructor ScavTrap parametric called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;
	std::cout << "Constructor ScavTrap copy called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor ScavTrap called" << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &src)
{
	this->_Name = src.getName();
	this->_Hit_points = src._Hit_points;
	this->_Energy_points = src._Hit_points;
	this->_Attack_damage = src._Attack_damage;
	return *this;
}

/*================================================*/

void	ScavTrap::guardGate(void)
{
	_guardGate = 1;
	std::cout << this->_Name << " now Switch to Gate Keeper mode" << std::endl;
	return;
}

void	ScavTrap::guardGateOff(void)
{
	_guardGate = 0;
	std::cout << this->_Name << " now switch to normal mode" << std::endl;
}

void	ScavTrap::attack(ScavTrap const &target)
{
	if (!check_status())
		return ;
	if (target._guardGate == 1)
	{
		std::cout << "Attack failed because " << target._Name << " have a Guard Gate." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_Name << " attacks ";
	std::cout << target._Name << ", causing " << this->_Attack_damage << " Points of damage!" << std::endl << std::endl;
	this->_Energy_points -= 1;
}
