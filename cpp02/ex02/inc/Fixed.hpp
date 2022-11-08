/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:18:36 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/08 17:14:01 by vahemere         ###   ########.fr       */
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
		Fixed				&operator=(Fixed const &src);
		~Fixed(void);
		
				/*Operator overload of comparison*/
		bool				operator>(Fixed const &src);
		bool				operator<(Fixed const &src);
		bool				operator>=(Fixed const &src);
		bool				operator<=(Fixed const &src);
		bool				operator==(Fixed const &src);
		bool				operator!=(Fixed const &src);
				/*Operator overload of arithmetics*/
		Fixed				operator+(Fixed const &src);
		Fixed				operator-(Fixed const &src);
		Fixed				operator*(Fixed const &src);
		Fixed				operator/(Fixed const &src);
				/*Operator overload of post and pre incrementation*/
		Fixed				operator++(void);								// pre incrementation
		Fixed				operator++(int);							// post incrementation
		Fixed				operator--(void);
		Fixed				operator--(int);
		
		float				toFloat(void) const;
		int					toInt(void) const;
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		static Fixed		min(Fixed &n1,Fixed &n2);
		static const Fixed	min(Fixed const &n1, Fixed const &n2);
		static Fixed		max(Fixed &n1, Fixed &n2);
		static const Fixed	max(Fixed const &n1, Fixed const &n2);

	private :
	
		int		_n;
		static const int _nbits = 8;
};
	std::ostream	&operator<<(std::ostream &os, Fixed const &src);
	
#endif