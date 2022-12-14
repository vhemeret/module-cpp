/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:58:42 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/16 00:05:26 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/data.hpp"

int main(void)
{
	uintptr_t	raw;	
	Data		*ptr = new Data;
	Data		*ptr2;

	ptr->a = "test";
	ptr->b = 2;

	std::cout << "Before serialize => a: " << ptr->a << "| b: " << ptr->b << std::endl;
	raw = serialize(ptr);
	ptr2 = deserialize(raw);
	std::cout << "After deserialize => a: " << ptr2->a << "| b: " << ptr2->b << std::endl;

	delete ptr;
}