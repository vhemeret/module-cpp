/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:15:35 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/16 00:32:54 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
# define BASE_H

#include <iostream>

class Base
{
	public :
		virtual ~Base(void) {};
};

Base	*generate(void);
void	identify(Base &p);
void	identify(Base *p);

#endif
