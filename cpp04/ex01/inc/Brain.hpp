/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 00:45:02 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/20 01:12:04 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
# define BRAIN_HPP

class Brain
{

	public:

		Brain();
		Brain(Brain const &src);
		~Brain();

		Brain	&operator=(Brain const &src);

	private:
	
		std::string	_ideas[100];

};

#endif