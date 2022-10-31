/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:53:15 by vahemere          #+#    #+#             */
/*   Updated: 2022/10/31 23:13:22 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <string>
#include <iostream>

class Harl
{
	public :
		
		Harl(void);
		~Harl(void);
		void	complain(std::string level);

	private :

		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);
};

#endif