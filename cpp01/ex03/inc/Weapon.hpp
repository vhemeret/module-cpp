/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 04:06:48 by vahemere          #+#    #+#             */
/*   Updated: 2022/10/25 17:33:29 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon
{
	public :

		Weapon(std::string type_weapon);
		~Weapon(void);
		void SetType(std::string new_type);
		std::string &GetType(void);
		
	private :

		std::string _type;
};

#endif