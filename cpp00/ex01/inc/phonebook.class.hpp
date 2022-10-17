/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 03:04:04 by vahemere          #+#    #+#             */
/*   Updated: 2022/10/17 17:11:18 by vahemere         ###   ########.fr       */
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
	int	ADD_Contact(void);
	int	SEARCH_Contact(void);

private :
	
	Contact _contact[8];
	int		_i;
};

#endif