/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:06:22 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/28 15:04:07 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	public :

		Form(void);
		Form(Form const &src);
		~Form(void);
		
		Form	&operator=(Form const &src);
		
		void		beSigned(Bureaucrat const &src);
		std::string	getName(void) const;
		bool		getIfSigned(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExec(void) const ;
		
		class GradeTooHighException : public std::exception
		{
			virtual const char *what () const throw()
			{
				return "The grade is to high";
			}
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return "The grade is to low";
			}
		};
		
	private :
		
		std::string const 	_name;
		bool				_signed;
		static const int			_gradeToSign = 10;
		static const int			_gradeToExec = 1;
};

std::ostream	&operator<<(std::ostream &os, Form const &src);

#endif