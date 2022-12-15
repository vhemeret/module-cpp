/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 18:03:07 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/16 00:00:56 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
# define DATA_H

#include <iostream>
#include <stdint.h>

typedef struct Data
{
	std::string	a;
	int	b;
} Data;

uintptr_t	serialize(Data *ptr);
Data		*deserialize(uintptr_t raw);


#endif