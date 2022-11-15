/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnimalClass.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:40:50 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/15 20:46:17 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMALCLASS_H
#define ANIMALCLASS_H

class AnimalClass
{
	public:
	
		AnimalClass(void);
		AnimalClass(AnimalClass const &src);
		~AnimalClass(void);
		AnimalClass	&operator=(AnimalClass const &src);
};

#endif