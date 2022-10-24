/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:11:48 by vahemere          #+#    #+#             */
/*   Updated: 2022/10/24 18:11:48 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *zombieHorde;

	zombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombieHorde[i].set_zombie_name(name);
	for (int i = 0; i < N; i++)
		zombieHorde[i].announce();
	return (zombieHorde);
}
