/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:57:52 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/10 00:39:00 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _Name("Random"), _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	*this = copy;
	std::cout << "copy constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string Name) : _Name(Name), _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << "parametric constructor called" << std::endl;
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
	this->_Hit_points = src._Hit_points;
	this->_Energy_points = src._Hit_points;
	this->_Attack_damage = src._Attack_damage;
	return *this;
}

/*================================================*/

std::string	ClapTrap::getName(void) const
{
	return (this->_Name);
}

int	ClapTrap::getHit(void) const
{
	return (this->_Hit_points);
}

int	ClapTrap::getEnergy(void) const
{
	return (this->_Energy_points);
}

int	ClapTrap::getAttackDamage(void) const
{
	return (this->_Attack_damage);
}

/*================================================*/

void			ClapTrap::setAttackDamage(unsigned int amount)
{
	this->_Attack_damage = amount;
}

/*================================================*/

int	ClapTrap::check_status(void)
{
	if (this->_Hit_points <= 0 || this->_Energy_points <= 0)
	{
		std::cout << "not enough energy or hit points to do this action." << std::endl << std::endl;
		return (0);
	}
	return (1);
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

/*================================================*/

std::ostream	&operator<<(std::ostream &os, const ClapTrap &src)
{
	return (os << "| " << "Name " << src.getName() << " | " 
		<< "Hit Point(s) " << src.getHit() << " | "
		<< "Energy Point(s) " << src.getEnergy() << " | "
		<< "Attack damage " << src.getAttackDamage() << " |" << std::endl << std::endl);
}
