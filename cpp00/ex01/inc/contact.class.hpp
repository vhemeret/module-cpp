/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 03:03:48 by vahemere          #+#    #+#             */
/*   Updated: 2022/10/13 17:34:34 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include "phonebook.hpp"

class Contact
{

public :

	Contact(void);
	~Contact(void);
	void	set_first_name(std::string input);
	void	set_last_name(std::string input);
	void	set_nickname(std::string input);
	void	set_phone_number(std::string input);
	void	set_darkest_secret(std::string input);

private :

	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _darkest_secret;
	std::string	_phone_number;

};

#endif