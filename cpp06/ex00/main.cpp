/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:11:06 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/06 18:09:21 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/convert.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error: the number of argument are invalid.\nTry this: ./convert <arg>" << std::endl;
		return (0);
	}
	else
	{
		std::string	value(av[1]);
		convert	to_convert(value);

		to_convert.findType();
		to_convert.converter();
	}
	return (0);
}