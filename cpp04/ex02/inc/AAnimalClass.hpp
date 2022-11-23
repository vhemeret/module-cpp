/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimalClass.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:40:50 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/23 17:27:51 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMALCLASS_H
#define AANIMALCLASS_H

#include "Header.hpp"

class AAnimal
{
	public:
	
		AAnimal(void);
	 	AAnimal(AAnimal const &src);
		virtual ~AAnimal(void);
		AAnimal	&operator=(AAnimal const &src);
		
		std::string	getType(void) const;
		virtual void		makeSound(void) const = 0;

	protected :
		
		std::string	_type;
};

#endif