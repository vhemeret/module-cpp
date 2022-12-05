/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:11:14 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/04 18:28:08 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

#include <iostream>
#include <string>
#include <cctype>

class convert
{
	
	public:
	
		convert(std::string value);
		convert(convert const &src);
		~convert(void);

		convert	&operator=(convert const &src);

		void	findType(void);
		void	display(void);
		
	private:
		
		std::string	_value;
		bool		_char;
		bool		_int;
		bool		_double;
		bool		_float;
};

std::ostream	&operator<<(std::ostream os, convert const &src);

#endif