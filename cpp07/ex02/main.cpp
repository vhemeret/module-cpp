/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 04:12:10 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/17 06:27:30 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Array.hpp"

int main(void)
{
	std::cout << "=== Array of int ===" << std::endl << std::endl;
	Array<int>	integerArr(5);
	Array<int>	integerArrCopy = integerArr;
	Array<int>	integerArr2(integerArr);

	// Set Array
	for (unsigned int i = 0; i < integerArr.size(); i++)
	{
		integerArr[i] = i;
		integerArrCopy[i] = i + 2;
		integerArr2[i] = i + 3;
	}

	// Display Array
	std::cout << "First Array: " << std::endl;
	for (unsigned int i = 0; i < integerArr.size(); i++)
		std::cout << "tab[" << i << "] = " << integerArr[i] << std::endl;
	std::cout << "\ncopy Array: " << std::endl;
	for (unsigned int i = 0; i < integerArrCopy.size(); i++)
		std::cout << "tab[" << i << "] = " << integerArrCopy[i] << std::endl;
	std::cout << "\ncopy constructor Array: " << std::endl;
	for (unsigned int i = 0; i < integerArr2.size(); i++)
		std::cout << "tab[" << i << "] = " << integerArr2[i] << std::endl;
		std::cout << "\n====================" << std::endl << std::endl;
	
	
	
	std::cout << "=== Array of string ===" << std::endl << std::endl;
	Array<std::string>	stringArr(2);

	// Set Array
	stringArr[0] = "Salut";
	stringArr[1] = "Bonjour";

	// try catch
	try
	{
		for (unsigned int i = 0; i < stringArr.size(); i++)
		std::cout << "tab[" << i << "] = " << stringArr[i] << std::endl;
		
		//test []
		std::cout << stringArr[0] << std::endl;
		std::cout << stringArr[3] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n====================" << std::endl << std::endl;
	
}