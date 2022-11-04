/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:18:36 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/04 18:24:57 by vahemere         ###   ########.fr       */
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
		Fixed				&operator=(Fixed const &src);
				/*Operator overload of comparison*/
		Fixed				&operator>(Fixed const &src);
		Fixed				&operator<(Fixed const &src);
		Fixed				&operator>=(Fixed const &src);
		Fixed				&operator<=(Fixed const &src);
		Fixed				&operator==(Fixed const &src);
		Fixed				&operator!=(Fixed const &src);
				/*Operator overload of arithmetics*/
		Fixed				&operator+(Fixed const &src);
		Fixed				&operator-(Fixed const &src);
		Fixed				&operator*(Fixed const &src);
		Fixed				&operator/(Fixed const &src);
		
		float				toFloat(void) const;
		int					toInt(void) const;
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		static int			&min(int &n1, int &n2);
		static const int	&min(int const &n1, int const &n2);
		static int			&max(int &n1, int &n2);
		static const int	&max(const int &n1, const int &n2);

	private :
	
		int		_n;
		static const int _nbits = 8;
};
	std::ostream	&operator<<(std::ostream &os, Fixed const &src);
	
#endif