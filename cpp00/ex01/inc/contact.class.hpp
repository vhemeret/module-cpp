/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 03:03:48 by vahemere          #+#    #+#             */
/*   Updated: 2022/10/10 04:01:44 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact
{

public :

	Contact(void);
	~Contact(void);
	void	set_first_name(std::string &first_name);
	void	set_last_name(std::string &first_name);
	void	set_nickname(std::string &first_name);
	void	set_phone_number(std::string &first_name);
	void	set_darkest_secret(std::string &first_name);

private :

	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;

};

#endif