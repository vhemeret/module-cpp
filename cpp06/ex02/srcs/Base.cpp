/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 00:20:16 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/16 00:31:43 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Base.hpp"
#include "../inc/A.hpp"
#include "../inc/B.hpp"
#include "../inc/C.hpp"
#include <ctime>
#include <stdlib.h>

Base	*generate(void)
{
	srand(time(NULL));
	int		random;

	random = rand() % 3;
	switch (random)
	{
		case 0:
			std::cout << "New instance of A created." << std::endl;
			return new A;
			break;
		case 1:
			std::cout << "New instance of B created." << std::endl;
			return new B;
			break;
		case 2:
			std::cout << "New instance of C created." << std::endl;
			return new C;
			break;
	}
	return (NULL);
}

void	identify(Base &p)
{
	try
	{
		A &type = dynamic_cast<A&>(p);
		(void)type;
		std::cout << "The type of the base is A" << std::endl;
		return;
	}
	catch(const std::exception& e){}
	try
	{
		B &type = dynamic_cast<B&>(p);
		(void)type;
		std::cout << "The type of the base is B" << std::endl;
		return;
	}
	catch(const std::exception& e){}
	try
	{
		C &type = dynamic_cast<C&>(p);
		(void)type;
		std::cout << "The type of the base is C" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Can't find identity of base" << std::endl;
	}
}

void	identify(Base *p)
{
	if (A	*type = dynamic_cast<A*>(p))
	{
		if (type)
		{
			std::cout << "The type of the base is A" << std::endl;
			return;	
		}
	}
	else if (B	*type = dynamic_cast<B*>(p))
	{
		if (type)
		{
			std::cout << "The type of the base is B" << std::endl;
			return;
		}
	}
	else if (C	*type = dynamic_cast<C*>(p))
	{
		if (type)
		{
			std::cout << "The type of the base is C" << std::endl;
			return;
		}
	}
	else
		std::cout << "Can't find identity of base" << std::endl;
}
