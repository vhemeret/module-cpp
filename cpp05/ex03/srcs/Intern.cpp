/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:27:28 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/30 16:25:50 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"

Intern::Intern(void)
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(Intern const &src)
{
	*this = src;
	std::cout << "Intern copy constructor called" << std::endl;	
}

Intern::~Intern(void)
{
	std::cout << "Intern desctructor called" << std::endl;
}

Intern	&Intern::operator=(Intern const &src)
{
	(void)src;
	return *this;
}

AForm	*Intern::robotomyForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::presidentialForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::shrubberyForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm	*Intern::makeForm(std::string nameForm, std::string target)
{
	std::string	function[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm	*(Intern::*ptr[3])(std::string) = {&Intern::robotomyForm, &Intern::presidentialForm, &Intern::shrubberyForm};

	if (nameForm.empty())
		throw Intern::NameEmptyException();
	else
	{
		for (int i = 0; i < 3; i++)
		{
			if (nameForm.compare(function[i]) == 0)
			{
				std::cout << "Intern creates " << nameForm << std::endl;
				return ((this->*ptr[i])(target));
			}
		}
	}
	return (NULL);
}	
