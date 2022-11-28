/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:32:53 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/28 20:08:38 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : _target("random"), _signed(false), _fd(this->_target.append("_shrubbery").c_str())
{
	_fd << "              # #### ###### ##\n"
    << "                 ### ## ## ####### ###\n"
    << "               ########################\n"
    << "             ###########################\n"
    << "           ###############################\n"
    << "          #################################\n"
    << "           ##############################\n"
    << "                     	||||\n"
    << "                      	 ||\n"
    << "                      	 ||" << std::endl << std::endl;

	_fd << "          &&& &&  & &&\n"
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
		
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _target(target), _signed(false), _fd(this->_target.append("_shrubbery").c_str())
{
	_fd << "              # #### ###### ##\n"
    << "                 ### ## ## ####### ###\n"
    << "               ########################\n"
    << "             ###########################\n"
    << "           ###############################\n"
    << "          #################################\n"
    << "           ##############################\n"
    << "                     	||||\n"
    << "                      	 ||\n"
    << "                       __||__" << std::endl << std::endl;

	_fd << "          &&& &&  & &&\n"
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
	{
		this->_target = src._target;
		this->_signed = src._signed;
	}
	return *this;
}