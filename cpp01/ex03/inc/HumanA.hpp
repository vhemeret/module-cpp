/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 04:08:04 by vahemere          #+#    #+#             */
/*   Updated: 2022/10/25 17:24:27 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"
#include <iostream>

class HumanA
{

	public :

		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void attack(void);

	private :
	
		std::string _name;
		Weapon &_weapon;
};

#endif