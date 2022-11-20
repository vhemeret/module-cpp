/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:32:39 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/19 23:19:21 by vahemere         ###   ########.fr       */
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

	std::cout << std::endl;
	std::cout << "---------- Creation obj WrongAnimal ------------" << std::endl << std::endl;
	const WrongAnimal *wanimal = new WrongAnimal();
	std::cout << "-------------------------------------------" << std::endl << std::endl;
	std::cout << "---------- Creation obj WrongCat ---------------" << std::endl << std::endl;;
	const WrongAnimal *wcat = new WrongCat();
	std::cout << "-------------------------------------------" << std::endl << std::endl;

	std::cout << wanimal->getType() << " " << std::endl;
	wanimal->makeSound();
	std::cout << wcat->getType() << " " << std::endl;
	wcat->makeSound();

	delete wcat;
	delete wanimal;
	
	return 0;
}