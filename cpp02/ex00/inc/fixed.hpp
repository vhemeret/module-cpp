/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:18:36 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/02 17:19:18 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
	public :

		Fixed(int nb);
		Fixed(Fixed &copy);
		~Fixed(void);
		int	getRawBits(void) const;
		int	setRawBits(int const raw) const;
		
	private :
	
		int	_n;
		static const int _nbits;
};

#endif