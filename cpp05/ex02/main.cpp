/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:34:32 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/29 20:32:29 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/AForm.hpp"
#include "inc/PresidentialPardonForm.hpp"
#include "inc/PresidentialPardonForm.hpp"
#include "inc/ShrubberyCreationForm.hpp"
#include "inc/RobotomyRequestForm.hpp"

int main(void)
{
	Bureaucrat	toto("toto", 150);
	// Bureaucrat	jojo("jojo", 2);
	
	/* Presidential Form */

	PresidentialPardonForm	form1("form1");
	std::cout << "\n" << toto << std::endl;
	toto.signForm(form1);
	// FormPresidential.execute(toto);
	// toto.executeForm(formPresidential);
}