/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:06:22 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/29 20:33:14 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public :

		AForm(void);
		AForm(std::string const name, int gradeSign, int gradeExec);
		AForm(AForm const &src);
		~AForm(void);
		
		AForm	&operator=(AForm const &src);
		
		void				beSigned(Bureaucrat const &src);
		std::string			getName(void) const;
		bool				getIfSigned(void) const;
		int					getGradeToSign(void) const;
		int					getGradeToExec(void) const;
		virtual void		execute(Bureaucrat const &executor) const = 0;
		
		class GradeTooHighException : public std::exception
		{
			virtual const char *what () const throw()
			{
				return "The grade required is to Low";
			}
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return "The grade required is to High";
			}
		};
		class FailedToExecException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return "The bureaucrat can not execute the form.";
			}
		};
		
	protected :

		std::string const	_name;
		bool				_signed;
		int					_gradeToSign;
		int					_gradeToExec;
};

std::ostream	&operator<<(std::ostream &os, AForm const &src);

#endif