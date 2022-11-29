/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:19:41 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/29 20:15:22 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", _gradeToSign, _gradeToExec)
{
	this->_target = "";
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", _gradeToSign, _gradeToExec)
{
	this->_target = target;
	std::cout << "RobotomyRequestForm parametric constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
{
	*this = src;
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	if (this != &src)
		this->_target = src._target;
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	int	nb;
	srand(time(NULL));
	
	if (executor.getGrade() <= this->_gradeToExec)
	{
		if (RobotomyRequestForm::getIfSigned() == true)
		{
			nb = rand() % 2;
			if (nb % 2 == 1)
				std::cout << "drrra drrraaa (drill sound)\n" << this->_target << " has been robotomized successfully." << std::endl;
			else
				throw RobotomyRequestForm::NoDrillSound();
		}
		else
			return;
	}
	else
		throw AForm::FailedToExecException();
}