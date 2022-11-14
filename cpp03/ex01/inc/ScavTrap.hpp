/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:33:29 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/14 22:07:08 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
	public :

		ScavTrap(void);
		ScavTrap(std::string Name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap(void);
		void	attack(const std::string &target);
		void	guardGate(void);

	private :
		
	
};

#endif