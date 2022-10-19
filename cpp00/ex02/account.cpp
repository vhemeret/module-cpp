/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   account.cpp                                        :+:      :+:    :+:   */
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

Account::Account(int initial_deposit)
{
	return ;
}

Account::~Account(void)
{
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
	std::cout << "index:" << Account::_accountIndex << ';';
	std::cout << "amount:" << Account::_amount << ';';
	std::cout << "deposits:" << Account::_nbDeposits << ';';
	std::cout << "withdrawals:" << Account::_nbWithdrawals << ';';
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	Account::_nbDeposits += 1;
	Account::_amount

}
