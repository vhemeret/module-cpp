/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 04:07:08 by vahemere          #+#    #+#             */
/*   Updated: 2022/10/25 17:33:36 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon(std::string type_weapon) : _type(type_weapon)
{
	return;
}

void Weapon::SetType(std::string new_type)
{
	this->_type = new_type;
}

std::string &Weapon::GetType(void)
{
	return (this->_type);
}

Weapon::~Weapon(void)
{
	return;
}