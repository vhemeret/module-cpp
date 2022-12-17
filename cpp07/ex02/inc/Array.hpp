/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 04:12:55 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/17 06:13:06 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>

template <typename T>
class Array
{
	public :

		/*	CANON FORM	*/
		Array(void) : _array(NULL), _size(0) {}
		Array(unsigned int N) : _array(new T[N]), _size(N) {}
		Array(Array const &src) : _array(new T[src._size]), _size(src._size)
		{
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = src._array[i];
			return;
		}
		~Array(void)
		{
			if (this->_array)
				delete [] this->_array;
			this->_array = NULL;
			this->_size = 0;
			return;
		}

		Array	&operator=(Array const &src)
		{
			if (this != &src)
			{
				if (this->_array != NULL)
				{
					delete [] this->_array;
					this->_array = new T[src._size];
				}
				else
					this->_arra = new T[src._size];
				this->_size = src._size;
				for (int i = 0; i < this->_size; i++)
					this->_array[i] = src._array[i];
			}
			return *this;
		}

		
		/*	OPERATOR	*/
		T	&operator[](unsigned int index) const
		{
			if (index >= this->_size)
				throw NotInRange();
			return (this->_array[index]);
		}


		/*	EXCEPTION	*/
		class NotInRange : public std::exception
		{
			const char *what() const throw()
			{
				return ("Error: You are trying to access an unallocated location");
			};
		};


		/*	MEMBER FUNCTION	*/
		unsigned int	size(void) const
		{
			return (this->_size);
		}

	private :

		T				*_array;
		unsigned int	_size;
			
};

#endif