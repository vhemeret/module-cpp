/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:32:53 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/29 20:31:23 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", _gradeToSign, _gradeToExec)
{
	this->_target = "";
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", _gradeToSign, _gradeToExec)
{
	this->_target = target;
	std::cout << "ShrubberyCreationForm parametric constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
{
	*this = src;
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	if (this != &src)
		this->_target = src.getName();
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string		filename = this->_target + "_shrubbery";
	std::fstream	file;

	if (executor.getGrade() <= this->_gradeToExec)
	{
		if (ShrubberyCreationForm::getIfSigned() == true)
		{
			file.open(filename.c_str());
			if (!file.is_open())
				throw ShrubberyCreationForm::FileErrorException();
			else
			{
				file << "              # #### ###### ##\n"
				<< "                 ### ## ## ####### ###\n"
				<< "               ########################\n"
				<< "             ###########################\n"
				<< "           ###############################\n"
				<< "          #################################\n"
				<< "           ##############################\n"
				<< "                     	||||\n"
				<< "                      	 ||\n"
				<< "                      	 ||" << std::endl << std::endl;
			
				file << "          &&& &&  & &&\n"
				<< "		&& &k/&k|& ()|/ @, &&\n"
				<< "		 &k/(/&/&||/& /_/)_&/_&\n"
   				<< "	  &() &k/&|()|/&k/ '%; & ()\n"
  				<< "	 &_k_&&_k |& |&&/&__%_/_& &&\n"
				<< "	&&   && & &| &| /& & % ()& /&&\n"
 				<< "	 ()&_---()&k&k|&&-&&--%---()~\n"
				<< "	     &&     k|||\n"
				<< "	 	         |||\n"
				<< "	   	         |||\n"
				<< "	   	         |||\n"
				<< "	       , -=-~  .-^- _" << std::endl;
				file.close();				
			}
		}
		else
			return;
	}
	else
		throw AForm::FailedToExecException();
}