/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:06:22 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/28 19:13:45 by vahemere         ###   ########.fr       */
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
		AForm(AForm const &src);
		~AForm(void);
		
		AForm	&operator=(AForm const &src);
		
		void				beSigned(Bureaucrat const &src);
		std::string			getName(void) const;
		bool				getIfSigned(void) const;
		int					getGradeToSign(void) const;
		int					getGradeToExec(void) const;
		virtual void		execute(Bureaucrat const &executor) = 0;
		
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
		static const int	_gradeToSign = 10;
		static const int	_gradeToExec = 1;
};

std::ostream	&operator<<(std::ostream &os, Form const &src);

#endif