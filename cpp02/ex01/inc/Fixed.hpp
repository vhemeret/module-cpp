/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:18:36 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/04 15:55:09 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <math.h>

class Fixed
{
	public :

		Fixed(void);
		Fixed(int nb);
		Fixed(float const nb);
		Fixed(Fixed const &copy);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		Fixed	&operator=(Fixed const &src);

	private :
	
		int		_n;
		static const int _nbits = 8;
};
	std::ostream	&operator<<(std::ostream &os, Fixed const &src);
	
#endif