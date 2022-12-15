/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:12:38 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/16 00:21:56 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Base.hpp"

int main(void)
{
	Base	*base_wtype;

	std::cout << "Creating random Base: \n" <<std::endl;
	base_wtype = generate();
	std::cout << "\nTrying to find type of Base with the ptr: " << std::endl;
	identify(base_wtype);
	std::cout << "\nNow trying to find type of Base with the ref: " << std::endl;
	identify(*base_wtype);
	
	delete base_wtype;
}