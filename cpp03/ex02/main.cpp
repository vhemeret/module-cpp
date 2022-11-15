/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:01:46 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/15 19:14:39 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ClapTrap.hpp"
#include "inc/ScavTrap.hpp"
#include "inc/FragTrap.hpp"

int main(void)
{
	FragTrap	b1;
	FragTrap	b2("toto");
	
	std::cout << std::endl << std::endl;

	std::cout << b1;
	std::cout << b2;

	b1.attack(b2.getName());
	b2.takeDamage(b1.getAttackDamage());

	std::cout << b1;
	std::cout << b2;
	
	b2.setAttackDamage(200);
	b2.attack(b1.getName());
	b1.takeDamage(b2.getAttackDamage());
	b1.highFivesGuys();

	std::cout << b1;
	std::cout << b2;
	
	std::cout << std::endl << std::endl;
}