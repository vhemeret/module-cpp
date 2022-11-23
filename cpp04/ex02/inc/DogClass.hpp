/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:39:43 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/23 17:20:05 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOGCLASS_H
# define DOGCLASS_H

#include "Header.hpp"

class Dog : public AAnimal
{
	public:
	
		Dog(void);
		Dog(Dog const &src);
		~Dog(void);
		Dog &operator=(Dog const &src);

		void	makeSound(void) const;
	
	private :

		Brain *_brain;
};

#endif