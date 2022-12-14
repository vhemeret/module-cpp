/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:05:47 by vahemere          #+#    #+#             */
/*   Updated: 2022/10/24 17:05:47 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Zombie.hpp"

int	main(void)
{
	Zombie *heap = newZombie("Zombheap");

	heap->announce();
	randomChump("Zombstack");

	delete	heap;
}