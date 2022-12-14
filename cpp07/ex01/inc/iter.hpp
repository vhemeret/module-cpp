/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:05:34 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/16 04:07:15 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

#include <iostream>
#include <string>

template <typename T>
void iter(T *tab, int size, void (*f)(T &tab, int index))
{
	for (int i = 0; i < size; i++)
		f(tab[i], i);
}

template <typename T>
void	display(T &tab, int index)
{
	std::cout << "tab[" << index << "] = " << tab << std::endl;
}

#endif