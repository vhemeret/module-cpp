/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 00:43:39 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/19 05:12:50 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Span.hpp"

int main()
{
	/*========================== BASIC TEST ===========================*/
	
	Span sp = Span(5);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << "== display Array ==" << std::endl;
	std::cout << sp;
	std::cout << "==================" << std::endl;
	std::cout << "the most shortest span: ";
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << "the most longest span: ";
	std::cout << sp.longestSpan() << std::endl << std::endl;

	/* Test with empty array (error) */
	std::cout << "Test with an empty Array" << std::endl;
	Span empty = Span(100);
	
	try
	{
		empty.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		empty.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << std::endl;
	
	
	/*========================== OTHER TEST ===========================*/
	
	/* Test adding number once time with huge array */
	std::vector<int>	ArrMaxSize(10000, 10);				// creation of an array of size 10.000 filled with 10
	Span arr = Span(10005); 								// creation of an span of size 10.0005
	arr.addNumber(1234); 									//	
	arr.addNumber(34);										//
	arr.addNumber(12);										//	push back 5 values			
	arr.addNumber(12234534);								//	
	arr.addNumber(1);										//
	arr.addNumber(ArrMaxSize.begin(), ArrMaxSize.end());	// adding ArrMaxSize into our span
	
	std::cout << "== display Array ==" << std::endl;
	for (int i = 0; i < 20; i++)
		std::cout << arr[i] << std::endl;
	std::cout << "==================" << std::endl << std::endl;
	
	/* Test with span to short (error) */
	try
	{
		Span arr_error = Span(1000);
		arr_error.addNumber(1234); 									//	
		arr_error.addNumber(34);										//
		arr_error.addNumber(12);										//	push back 5 values			
		arr_error.addNumber(12234534);								//	
		arr_error.addNumber(1);
		std::cout << "== display Array ==" << std::endl;
		std::cout << arr_error;
		std::cout << "==================" << std::endl;
		arr_error.addNumber(ArrMaxSize.begin(), ArrMaxSize.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}