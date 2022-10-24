/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:06:21 by vahemere          #+#    #+#             */
/*   Updated: 2022/10/24 17:06:21 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>
#include <stdlib.h>

class Zombie
{
	public :

		Zombie(void);
		~Zombie(void);
		void set_zombie_name(std::string name);
		void announce(void);

	private :

		std::string _name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif