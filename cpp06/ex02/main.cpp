/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:12:38 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/12 19:59:03 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Base.hpp"
#include "inc/A.hpp"
#include "inc/B.hpp"
#include "inc/C.hpp"
#include <ctime>

Base	*generate(void)
{
	srand(time(NULL));
	int		random;

	random = rand() % 3;
	if (random == 0)
	{
		std::cout << "New instance of A created." << std::endl;
		return new A;
	}
	else if (random == 1)
	{
		std::cout << "New instance of B created." << std::endl;
		return new B;
	}
	else
	{
		std::cout << "New instance of C created." << std::endl;
		return new C;
	}
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