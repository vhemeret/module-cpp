/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:32:39 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/17 18:31:10 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Header.hpp"

int main()
{
	std::cout << "---------- Creation obj Animal ------------" << std::endl << std::endl;
	const Animal *meta = new Animal();
	std::cout << "-------------------------------------------" << std::endl << std::endl;
	std::cout << "---------- Creation obj Dog ---------------" << std::endl << std::endl;;
	const Animal *dog = new Dog();
	std::cout << "-------------------------------------------" << std::endl << std::endl;
	std::cout << "---------- Creation obj Cat ---------------" << std::endl << std::endl;
	const Animal *cat = new Cat();
	std::cout << "-------------------------------------------" << std::endl << std::endl;
	
	std::cout << dog->getType() << " " << std::endl;
	dog->makeSound();
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();
	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();

	delete cat;
	delete dog;
	delete meta;
	
	return 0;
}