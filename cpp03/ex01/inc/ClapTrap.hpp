/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:02:14 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/14 22:04:58 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
	public:
	
		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(ClapTrap const &copy);
		~ClapTrap();
		
		ClapTrap	&operator=(ClapTrap const &src);
		
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string		getName(void) const;
		unsigned int	getAttackDamage(void) const;
		void			setAttackDamage(unsigned int amount);
		int				check_status(void);
		void			display_status(void);
		
	protected:

		std::string	_Name;
		int			_Hit_points;
		int			_Energy_points;
		int			_Attack_damage;
};

#endif