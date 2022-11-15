/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:33:29 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/15 15:23:11 by vahemere         ###   ########.fr       */
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

		ScavTrap	&operator=(ScavTrap const &src);
		
		void	attack(ScavTrap const &target);
		void	guardGate(void);
		void	guardGateOff(void);

	private :
	
		int	_guardGate;
};

#endif