/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:08:37 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/19 23:17:10 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "Header.hpp"

class WrongCat :  public WrongAnimal
{

	public :

		WrongCat(void);
		WrongCat(WrongCat const &src);
		~WrongCat(void);
		
		WrongCat &operator=(WrongCat const &src);

		void		makeSound(void) const;
};

#endif