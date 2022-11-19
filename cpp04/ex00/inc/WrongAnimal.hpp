/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:30:44 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/19 23:19:28 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include "Header.hpp"

class WrongAnimal
{
	public :

		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &src);
		virtual ~WrongAnimal(void);
		
		WrongAnimal &operator=(WrongAnimal const &src);

		void		makeSound(void) const;
		std::string	getType(void) const;

	protected :

		std::string	_type;

};

#endif