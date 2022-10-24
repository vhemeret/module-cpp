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

class Zombie
{
	public :

		Zombie(std::string name);
		~Zombie(void);
		void announce(void);

	private :

		std::string _name;

};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif