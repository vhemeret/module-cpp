/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:34:32 by vahemere          #+#    #+#             */
/*   Updated: 2022/11/28 14:59:28 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Form.hpp"
#include "inc/Bureaucrat.hpp"

int main(void)
{
		Bureaucrat	toto("toto", 11);
		Form		contract;
	
	std::cout << std::endl;
	try
	{
		contract.beSigned(toto);
		toto.signForm(contract);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << toto << std::endl;
	
	try
	{
		toto.incrementGrade();
		std::cout << toto << std::endl;
		contract.beSigned(toto);
		toto.signForm(contract);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}