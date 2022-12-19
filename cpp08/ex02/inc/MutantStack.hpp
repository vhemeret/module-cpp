/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 05:43:11 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/19 13:53:27 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <iostream>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{

	public :
		
		MutantStack(void) {};
		MutantStack(MutantStack const &src)
		{
			*this = src;
		}
		virtual ~MutantStack(void) {};
		
		MutantStack	&operator=(MutantStack const &src)
		{
			if (this != &src)
				*this = src;
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin(void) 
		{
			return (this->c.begin());
		}
		iterator	end(void)	
		{
			return (this->c.end());
		}
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		const_iterator	begin(void) const
		{
			return	(this->c.begin());
		}
		const_iterator	end(void) const
		{
			return (this->c.end());
		}
};

#endif