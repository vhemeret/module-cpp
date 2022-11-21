/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:32:39 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/21 13:11:34 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Header.hpp"

int main()
{
	std::cout << "---------- Creation array of Animal ------------" << std::endl << std::endl;
	Animal *arr[4];
	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			arr[i] = new Dog;
		else
			arr[i] = new Cat;
		std::cout << std::endl;
	}
	std::cout << "-------------------------------------------" << std::endl << std::endl;
	
	std::cout << "--------------- type of Animal -----------------" << std::endl << std::endl;
	for (int i = 0; i < 4; i++)
	{
		std::cout << "Type: " << arr[i]->getType() << " | Sound: ";
		arr[i]->makeSound();
		std::cout << std::endl;
	}
	std::cout << "-------------------------------------------" << std::endl << std::endl;

	for (int i = 0; i < 4; i++)
	{
		delete arr[i];
		std::cout << std::endl;
	}
	
	return 0;
}