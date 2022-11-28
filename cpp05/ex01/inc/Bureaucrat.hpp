/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:36:08 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/28 15:57:35 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public :
		
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat(void);
		
		Bureaucrat	&operator=(Bureaucrat const &src);

		std::string getName(void) const;
		int			getGrade(void) const;
		void		incrementGrade(void);
		void		decrementGrade(void);
		void		signForm(Form const &form);

		class GradeTooHighException : public std::exception 
		{
			virtual const char *what() const throw()
			{
				return "The grade is to high";
			}
		};
		class GradeTooLowException : public std::exception
		{
			const char *what() const throw()
			{
				return "The grade is to low";
			}
		};

	private :
	
		const std::string _name;
		int 		_grade;
	
};

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &src);

#endif