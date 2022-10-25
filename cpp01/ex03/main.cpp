/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 04:06:00 by vahemere          #+#    #+#             */
/*   Updated: 2022/10/25 17:36:27 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Weapon.hpp"
#include "inc/HumanA.hpp"
#include "inc/HumanB.hpp"

int main(void)
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.SetType("some other type of club");
	bob.attack();

	Weapon club1 = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.SetWeapon(club1);
	jim.attack();
	club1.SetType("some other type of club");
	jim.SetWeapon(club1);
	jim.attack();
	return (0);
}