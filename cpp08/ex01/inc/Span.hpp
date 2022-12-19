/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 22:15:35 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/19 05:03:50 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <vector>

class Span
{

	public :

		Span(unsigned int N);
		Span(Span const &src);
		~Span(void);

		Span				&operator=(Span const &src);
		int					&operator[](unsigned int index);

		void			addNumber(int const nb);
		void			addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;
		
		std::vector<int>	getSpan(void) const;
		
	private :

		unsigned int _N;
		std::vector<int> _arr;

};

std::ostream	&operator<<(std::ostream &os, Span const &src);

#endif