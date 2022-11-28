/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:35:45 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/28 15:06:17 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

Bureaucrat::Bureaucrat(void) : _name("Bureaucrat"), _grade(1)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat parametric constructor called" << std::endl;
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &src)
{
	if (this != &src)
		this->_grade = src._grade;
	return *this;
}

void	Bureaucrat::incrementGrade(void)
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade -= 1;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade += 1;
}

std::string	Bureaucrat::getName(void) const
{
	return this->_name;
}

int			Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void	Bureaucrat::signForm(Form const &form)
{
	if (form.getIfSigned() == true)
		std::cout << this->_name << " Form is signed." << std::endl;
	else
		std::cout << this->_name << " couldn't sign Form because his grade is to low." << std::endl;
}


std::ostream	&operator<<(std::ostream &os, Bureaucrat const &src)
{
	return (os << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl);
}