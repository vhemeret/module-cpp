/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:36:08 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/23 21:17:00 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>

class Bureaucrat
{
	public :
		
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat(void);
		
		Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &src);

		std::string getName(void) const;
		int			getGrade(void) const;

		class GradeTooHighException
		{
			
		};
		class GradeTooLowException
		{
			
		};

	private :
	
		const std::string _name;
		int 		_grade;
	
};

#endif