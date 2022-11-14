/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:01:46 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/14 18:34:44 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ClapTrap.hpp"

int main(void)
{
	ClapTrap	a("jojo");
	ClapTrap	b("toto");
	
	a.display_status();
	b.display_status();
	
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());

	a.display_status();
	b.display_status();
	
	a.setAttackDamage(2);
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());

	a.display_status();
	b.display_status();

	b.beRepaired(10);
	b.setAttackDamage(20);
	b.attack(b.getName());
	a.takeDamage(b.getAttackDamage());

	a.display_status();
	b.display_status();
}