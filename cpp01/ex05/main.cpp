/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:57:01 by vahemere          #+#    #+#             */
/*   Updated: 2022/10/31 23:30:19 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Harl.hpp"

int main(void)
{
	Harl harl;
	std::string	str;
	
	std::cout << "choose word to display critical" << std::endl;
	std::cout << "debug | info | warning | error" << std::endl << std::endl;
	while (std::getline(std::cin, str))
	{
		if (str.compare("debug") == 0 || str.compare("info") == 0
			|| str.compare("warning") == 0 || str.compare("error") == 0)
				harl.complain(str);
		else
			std::cout << "Please type : debug, info, warning or error." << std::endl << std::endl;
		std::cout << "choose word to display critical" << std::endl;
		std::cout << "debug | info | warning | error" << std::endl << std::endl;
	}
}