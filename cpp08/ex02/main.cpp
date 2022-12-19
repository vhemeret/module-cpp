/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 05:22:42 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/19 14:28:58 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/MutantStack.hpp"

int main(void)
{
	std::cout << "======= Test subject: =======" << std::endl << std::endl;
	
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	/*===============================================*/
	std::cout << "display stack: " << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	while (it != ite)
		std::cout << *it++ << std::endl;
	std::cout << "===============" << std::endl;
	std::cout << std::endl;
	/*===============================================*/
	
	std::cout << "mstack.top() = " << mstack.top() << std::endl;				// move lastest to the top
	mstack.pop();																//remove lastest element
	std::cout << "mstack.size() = " << mstack.size() << std::endl << std::endl;	// get size of the stack
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	/*===============================================*/
	std::cout << "display stack: " << std::endl;
	it = mstack.begin();
	ite = mstack.end();
	while (it != ite)
		std::cout << *it++ << std::endl;
	std::cout << "===============" << std::endl;
	std::cout << std::endl;
	/*===============================================*/
	
	std::stack<int> s(mstack);
	std::cout << "s.top() = " << s.top() << std::endl << std::endl;
	// impossible to iter

	
	/*===================================================================*/

	
	std::cout << "======= Other tests: =======" << std::endl;
	
	std::list<int> lst;
	
	lst.push_back(5);
	lst.push_back(17);
	
	/*===============================================*/
	std::cout << "display lst: " << std::endl;
	std::list<int>::iterator lit = lst.begin();
	std::list<int>::iterator lite = lst.end();
	while (lit != lite)
		std::cout << *lit++ << std::endl;
	std::cout << "===============" << std::endl;
	std::cout << std::endl;
	/*===============================================*/
	
	std::cout << "lst.top() = " << lst.back() << std::endl;					// move lastest to the top
	lst.pop_back();																//remove lastest element
	std::cout << "mstack.size() = " << lst.size() << std::endl << std::endl;	// get size of the stack
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);
	
	/*===============================================*/
	std::cout << "display stack: " << std::endl;
	lit = lst.begin();
	lite = lst.end();
	while (lit != lite)
		std::cout << *lit++ << std::endl;
	std::cout << "===============" << std::endl;
	std::cout << std::endl;
	/*===============================================*/
}