/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:54:52 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/29 20:14:23 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", _gradeToSign, _gradeToExec)
{
	this->_target = "";
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : AForm("PresidentialPardonForm", _gradeToSign, _gradeToExec)
{
	this->_target = target;
	std::cout << "PresidentialPardonForm parametric constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
{
	*this = src;
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	if (this != &src)
		this->_target = src._target;
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() <= this->_gradeToExec)
	{
		if (PresidentialPardonForm::getIfSigned() == true)
			std::cout << this->_target << " was forgiven by Zaphod Beeblebrox." << std::endl;
		else
			return;
	}
	else
		throw AForm::FailedToExecException();
}