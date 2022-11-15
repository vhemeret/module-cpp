/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:01:46 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/15 15:52:44 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ClapTrap.hpp"
#include "inc/ScavTrap.hpp"

int main(void)
{
	ScavTrap	b1;
	ScavTrap	b2("toto");
	
	std::cout << std::endl << std::endl;

	std::cout << b1;
	std::cout << b2;

	b1.attack(b2);
	b2.takeDamage(b1.getAttackDamage());

	std::cout << b1;
	std::cout << b2;
	
	b2.guardGate();
	b1.attack(b2);
	
	std::cout << b1;
	std::cout << b2;
	
	b2.setAttackDamage(200);
	b2.attack(b1);
	b1.takeDamage(b2.getAttackDamage());
	b2.guardGateOff();

	std::cout << b1;
	std::cout << b2;

	b1.attack(b2);
	
	std::cout << b1;
	std::cout << b2;
	
	std::cout << std::endl << std::endl;
}