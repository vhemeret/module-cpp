/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 19:06:29 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/13 19:53:58 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

#include <iostream>

template <typename T>
T const &max(T const &a, T const &b)
{
	if (a > b)
		return a;
	return b;
}

template <typename T>
T const &min(T const &a, T const &b)
{
	if (a < b)
		return a;
	return b;
}

template <typename T>
void	swap(T &a, T &b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

#endif