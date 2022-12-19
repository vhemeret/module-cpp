/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 15:39:33 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/19 00:18:36 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>
#include <vector>

template <typename T>
void	easyfind(T &container, int value)
{
	typename T::iterator	it;

	for (it = container.begin(); it != container.end(); it++)
	{
		if (*it == value)
			return ;
	}
	throw std::runtime_error("Value not found");
}

#endif