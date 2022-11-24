/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:34:32 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/24 22:08:57 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Bureaucrat.hpp"

void test2(Bureaucrat &i)
{
	if (i.getGrade() <= 1)
		throw Bureaucrat::GradeTooLowException();
}

void	test1(Bureaucrat &i)
{
		if (i.getGrade() >= 150)
			throw Bureaucrat::GradeTooHighException();
}

int main(void)
{
		Bureaucrat	a("nono", 1);
		Bureaucrat	b("jojo", 2);
		Bureaucrat	c("coco", 3);
		Bureaucrat	d("toto", 150);
	
	std::cout << std::endl;
	try
	{
		Bureaucrat toLow("mr.toLow", 0);
		Bureaucrat toHigh("mr.toHigh", 150);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << a;
	std::cout << b;
	std::cout << c;
	std::cout << d << std::endl;
	
	try 
	{
			std::cout << "first test called, check if the bureaucrat can be decrease" << std::endl << std::endl;
			test1(a);
			test1(b);
			test1(c);
			test1(d);
			std::cout << "second test called check if the bureaucrat can be increase" << std::endl << std::endl;
			test2(a);
			test2(b);
			test2(c);
			test2(d);
	}
	catch (std::exception &e) 
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << a;
	std::cout << b;
	std::cout << c;
	std::cout << d << std::endl;
}