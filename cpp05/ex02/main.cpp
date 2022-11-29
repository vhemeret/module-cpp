/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:34:32 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/29 23:40:59 by vahemere         ###   ########.fr       */
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
	Bureaucrat	jojo("jojo", 1);
	PresidentialPardonForm	form1("form1");
	RobotomyRequestForm		form2("form2");
	ShrubberyCreationForm	form3("form3");
	
	/* Test Form with Jojo*/

	std::cout << "\n" << toto << std::endl;
	try
	{
		toto.signForm(form1);
		toto.executeForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		toto.signForm(form2);
		toto.executeForm(form2);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
	try
	{
		toto.signForm(form3);
		toto.executeForm(form3);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
	std::cout << std::endl;
	
	/* Test Form with Toto*/

	std::cout << "\n" << jojo << std::endl;
	try
	{
		jojo.signForm(form1);
		jojo.executeForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
	try
	{
		jojo.signForm(form2);
		jojo.executeForm(form2);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
	try
	{
		jojo.signForm(form3);
		jojo.executeForm(form3);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
	std::cout << std::endl;
	
}