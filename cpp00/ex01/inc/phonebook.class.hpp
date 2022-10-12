/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 03:04:04 by vahemere          #+#    #+#             */
/*   Updated: 2022/10/12 14:22:39 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "phonebook.hpp"

class Phonebook
{

public :
	
	Phonebook(void);
	~Phonebook(void);
	void	ADD_Contact(void);
	void	SEARCH_Contact(void);

private :
	
	Contact _contact[8];
	int		_i;
};

#endif