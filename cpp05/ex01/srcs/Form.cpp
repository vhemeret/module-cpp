/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:29:08 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/29 15:24:25 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.hpp"

Form::Form(void) : _name("Form"), _signed(false), _gradeToSign(10), _gradeToExec(1)
{
	std::cout << "Form default constructor called" << std::endl;	
}

Form::Form(std::string const name, int gradeToSign, int gradeToExec) : _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	std::cout << "Form parametric constructor called" << std::endl;
}

Form::Form(Form const &src)
{
	*this = src;
	std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form(void)
{
	std::cout << "Form destructor called" << std::endl;
}

Form	&Form::operator=(Form const &src)
{
	if (this != &src)
		this->_signed = src.getIfSigned();
	return *this;
}

void	Form::beSigned(Bureaucrat const &src)
{
	if (src.getGrade() <= 10)
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

bool		Form::getIfSigned(void) const
{
	return (this->_signed);
}

int			Form::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int			Form::getGradeToExec(void) const
{
	return (this->_gradeToExec);
}

std::ostream	&operator<<(std::ostream &os, Form const &src)
{
	if (src.getIfSigned() == true)
		return (os << src.getName() << " is signed. Grade to sign: " << src.getGradeToSign() << " Grade to exec: " << src.getGradeToExec() << std::endl);
	else	
		return (os << src.getName() << " is not signed. Grade to sign: " << src.getGradeToSign() << " Grade to exec: " << src.getGradeToExec() << std::endl);
}