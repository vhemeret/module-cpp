/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 04:08:15 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/03 15:52:19 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	public :

		HumanB(std::string name);
		~HumanB(void);
		void SetWeapon(Weapon &weapon);
		void attack(void);

	private :

		std::string _name;
		Weapon *_weapon;
};

#endif