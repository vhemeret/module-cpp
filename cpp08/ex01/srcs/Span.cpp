/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 22:26:52 by vahemere          #+#    #+#             */
/*   Updated: 2022/12/19 05:03:38 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

Span::Span(unsigned int N) : _N(N) {};

Span::Span(Span const &src)
{
	*this = src;
	return;
}

Span::~Span(void) {};

Span	&Span::operator=(Span const &src)
{
	if (this != &src)
	{
		this->_N = src._N;
		this->_arr = src._arr;
	}
	return *this;
}

int	&Span::operator[](unsigned int index)
{
	if (index >= this->_N)
		throw std::runtime_error("The value is out of range");
	return (this->_arr[index]);
}

void	Span::addNumber(int const nb)
{
	if (this->_arr.size() >= this->_N)
		throw std::runtime_error("Impossible to add new number because the span is already full.");
	_arr.push_back(nb);
}

void	Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (this->_arr.size() + std::distance(start, end) > this->_N)
		throw std::runtime_error("Impossible to insert value");
	this->_arr.insert(this->_arr.end(), start, end);
}

unsigned int	Span::shortestSpan(void) const
{
	unsigned int	span = 0;
	
	if (this->_arr.size() < 2)
		throw std::runtime_error("impossible to find the shortest span.");
	else
	{
		std::vector<int>::const_iterator max = std::max_element(this->_arr.begin(), this->_arr.end());
		span = *max;
		for (size_t i = 0; i < this->_arr.size(); i++)
		{
			for (size_t j = i + 1; j < this->_arr.size(); j++)
				if (span > static_cast<unsigned int>(abs(this->_arr[i] - this->_arr[j])))
					span = abs(this->_arr[i] - this->_arr[j]);
		}
	}
	return (span);
}

unsigned int	Span::longestSpan(void) const
{
	unsigned int	span = 0;

	if (this->_arr.size() < 2)
		throw std::runtime_error("impossible to find the longest span.");
	else
	{
		std::vector<int>::const_iterator max = std::max_element(this->_arr.begin(), this->_arr.end());
		std::vector<int>::const_iterator min = std::min_element(this->_arr.begin(), this->_arr.end());
		span = *max - *min;
	}
	return (span);
}

std::vector<int>	Span::getSpan(void) const
{
	return (this->_arr);
}


std::ostream	&operator<<(std::ostream &os, Span const &src)
{
	for (std::vector<int>::iterator it = src.getSpan().begin(); it != src.getSpan().end(); it++)
		os << *it << std::endl;
	return (os);
}