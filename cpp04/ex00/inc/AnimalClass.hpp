/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnimalClass.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:40:50 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/19 15:27:47 by vahemere         ###   ########.fr       */
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
		virtual ~Animal(void);
		Animal	&operator=(Animal const &src);
		
		std::string	getType(void) const;
		virtual void		makeSound(void) const;

	protected :
		
		std::string	_type;
};

#endif