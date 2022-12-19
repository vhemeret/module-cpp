/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 15:38:55 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/18 22:06:56 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/easyfind.hpp"

int main(void)
{
	std::vector<int>	arr;

	for (int i = 0; i < 5; i++)
		arr.push_back(i + 1);
	std::cout << "display array: " << std::endl;
	for (std::vector<int>::iterator it = arr.begin(); it != arr.end(); it++)
		std::cout << *it << std::endl;
	try
	{
		easyfind(arr, 4);
		std::cout << "Value 4 found successfull" << std::endl;
		easyfind(arr, 18);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}