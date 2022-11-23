/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:40:28 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/23 17:19:40 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CATCLASS_H
# define CATCLASS_H

#include "Header.hpp"

class Cat : public AAnimal
{
	public:
	
		Cat(void);
		Cat(Cat const &src);
		~Cat(void);
		Cat &operator=(Cat const &src);

		void	makeSound(void) const;
	
	private :
	
		Brain *_brain;

};

#endif