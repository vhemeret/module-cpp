/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:11:14 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/07 13:39:09 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <climits>

class convert
{
	
	public:
	
		convert(std::string value);
		convert(convert const &src);
		~convert(void);

		convert	&operator=(convert const &src);

		void	findType(void);
		void	converter(void);
		void	to_char(void);
		void	to_int(void);
		void	to_double(void);
		void	to_float(void);
		void	to_spec(void);
		
	private:
		
		std::string	_value;
		bool		_char;
		bool		_int;
		bool		_double;
		bool		_float;
};

#endif