/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:17:41 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/29 19:59:03 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:

		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		~RobotomyRequestForm();
		
		RobotomyRequestForm	&operator=(RobotomyRequestForm const &src);

		void		execute(Bureaucrat const &executor) const;

		class NoDrillSound : public std::exception
		{
			const char *what() const throw()
			{
				return "The form can not be execut because the executor was unlucky.";
			}
		};
		
	private:
	
		std::string			_target;
		static const int	_gradeToSign = 72;
		static const int	_gradeToExec = 45;

};

#endif