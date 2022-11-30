/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:29:08 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/29 20:27:09 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AForm.hpp"

AForm::AForm(void) : _name("AForm"), _signed(false)
{
	std::cout << "AForm default constructor called" << std::endl;	
}

AForm::AForm(std::string const name, int gradeSign, int gradeExec) : _name(name), _gradeToSign(gradeSign), _gradeToExec(gradeExec)
{
	std::cout << "AForm parametric constructor called" << std::endl;
	if (gradeExec < 1 || gradeSign < 1)
		throw AForm::GradeTooHighException();
	else if (gradeExec > 150 || gradeSign > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const &src)
{
	*this = src;
	std::cout << "AForm copy constructor called" << std::endl;
}

AForm::~AForm(void)
{
	std::cout << "AForm destructor called" << std::endl;
}

AForm	&AForm::operator=(AForm const &src)
{
	if (this != &src)
		this->_signed = src.getIfSigned();
	return *this;
}

void	AForm::beSigned(Bureaucrat const &src)
{
	if (src.getGrade() <= _gradeToSign)
		_signed = true;
	else
		throw AForm::GradeTooLowException();
}

std::string	AForm::getName(void) const
{
	return (this->_name);
}

bool		AForm::getIfSigned(void) const
{
	return (this->_signed);
}

int			AForm::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int			AForm::getGradeToExec(void) const
{
	return (this->_gradeToExec);
}

std::ostream	&operator<<(std::ostream &os, AForm const &src)
{
	if (src.getIfSigned() == true)
		return (os << src.getName() << " is signed. Grade to sign: " << src.getGradeToSign() << " Grade to exec: " << src.getGradeToExec() << std::endl);
	else	
		return (os << src.getName() << " is not signed. Grade to sign: " << src.getGradeToSign() << " Grade to exec: " << src.getGradeToExec() << std::endl);
}