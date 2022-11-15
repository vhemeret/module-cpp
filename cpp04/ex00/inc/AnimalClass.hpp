/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnimalClass.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:40:50 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/15 22:30:27 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMALCLASS_H
#define ANIMALCLASS_H

#include "Header.hpp"

class Animal
{
	public:
	
		Animal(void);
		Animal(Animal const &src);
		~Animal(void);
		Animal	&operator=(Animal const &src);
		
		void	makeSound(void);

	protected :
		
		std::string	_type;
};

#endif