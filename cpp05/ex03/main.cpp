/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:34:32 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/30 16:44:32 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/AForm.hpp"
#include "inc/PresidentialPardonForm.hpp"
#include "inc/PresidentialPardonForm.hpp"
#include "inc/ShrubberyCreationForm.hpp"
#include "inc/RobotomyRequestForm.hpp"
#include "inc/Intern.hpp"

int main(void)
{
	Bureaucrat	jojo("jojo", 1);
	Intern		stagiaire;
	AForm* 		form;
	AForm* 		form1;
	AForm* 		form2;
	AForm* 		form3;

	std::cout << "\n" << jojo << std::endl;
	
	try
	{
		form = stagiaire.makeForm("robotomy request", "Bender");
		std::cout << std::endl;
		form1 = stagiaire.makeForm("presidential pardon", "test");
		std::cout << std::endl;
		form2 = stagiaire.makeForm("shrubbery creation", "test");
		std::cout << std::endl;
		form3 = stagiaire.makeForm("", "test");
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
		std::cout << std::endl;

	delete form;
	delete form1;
	delete form2;
}