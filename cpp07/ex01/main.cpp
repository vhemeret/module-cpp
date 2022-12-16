/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 19:59:02 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/16 04:03:32 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "inc/iter.hpp"

int main(void)
{
	int	tab[5] = {0, 1, 2, 3, 4};
	std::string	tab1[3] = {"coucou", "salut", "bonjour"};

	::iter(tab, 5, ::display);
	std::cout << std::endl << std::endl;
	::iter(tab1, 3, ::display);
}