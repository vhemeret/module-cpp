/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:58:42 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/12 15:54:01 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/data.hpp"

uintptr_t	serialize(Data *ptr)
{
	uintptr_t raw;

	raw = reinterpret_cast<uintptr_t>(ptr);
	return (raw);
}

Data	*deserialize(uintptr_t raw)
{
	Data	*ptr;

	ptr = reinterpret_cast<Data*>(raw);
	return (ptr);
}

int main(void)
{
	uintptr_t	raw;	
	Data	*ptr = new Data;

	ptr->a = 1;
	ptr->b = 2;
	
	std::cout << "Before serialize => a: " << ptr->a << "| b: " << ptr->b << std::endl;
	raw = serialize(ptr);
	ptr = deserialize(raw);
	std::cout << "After deserialize => a: " << ptr->a << "| b: " << ptr->b << std::endl;
}