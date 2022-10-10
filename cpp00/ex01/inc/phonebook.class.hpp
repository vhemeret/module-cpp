/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 03:04:04 by vahemere          #+#    #+#             */
/*   Updated: 2022/10/10 03:56:06 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class Phonebook
{

public :
	
	Phonebook(void);
	~Phonebook(void);
	void	ADD_Contact(void);
	void	SEARCH_Contac(void);

private :
	
	Contact _contact[8];
	int		_i;
};

#endif