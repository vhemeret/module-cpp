/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 03:00:59 by vahemere          #+#    #+#             */
/*   Updated: 2022/10/18 03:00:59 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	static int	i = 0;

	_displayTimestamp();
	std::cout << "index:" << i << ';';
	std::cout << "amount:" << initial_deposit << ';';
	std::cout << "created" << std::endl;
	this->_accountIndex = i;
	this->_nbAccounts = ++i;
	this->_totalAmount += initial_deposit;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	return ;
}

int Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

void	Account::_displayTimestamp(void)
{
	std::time_t now = std::time(0);
	std::tm *local = std::localtime(&now);

	std::cout << '[';
	std::cout << 1900 + local->tm_year;
	((1 + local->tm_mon) < 10) ? std::cout << '0' << 1 + local->tm_mon : std::cout << 1 + local->tm_mon;
	(local->tm_mday < 10) ? std::cout << '0' << local->tm_mday : std::cout << local->tm_mday;
	std::cout << '_';
	(local->tm_hour < 10) ? std::cout << '0' << local->tm_hour : std::cout << local->tm_hour;
	(local->tm_min < 10) ? std::cout << '0' << local->tm_min : std::cout << local->tm_min;
	(local->tm_sec < 10) ? std::cout << '0' << local->tm_sec : std::cout << local->tm_sec;
	std::cout << "] ";
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";" << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";" << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "amount:" << _amount << ';';
	std::cout << "deposits:" << _nbDeposits << ';';
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';'; 
	std::cout << "p_amount:" << this->_amount << ';';
	std::cout <<  "deposit:" << deposit << ';';
	this->_amount += deposit;
	std::cout << "amount:" << this->_amount << ';';
	this->_nbDeposits += 1;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'; 
	std::cout << "p_amount:" << this->_amount << ';';
	std::cout << "withdrawal:";
	if (withdrawal > this->_amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	else
	std::cout << withdrawal << ';';
	this->_amount -= withdrawal;
	std::cout << "amount:" << this->_amount << ';';
	this->_nbWithdrawals += 1;
	std::cout << "nb_withdrawals:" << this->_nbDeposits << std::endl;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals += 1;
	return (true);
}

int	Account::checkAmount(void) const
{
	return (0);
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << this->_amount << ';';
	std::cout << "closed" << std::endl;
	this->_nbAccounts -=1;
	return ;
}
