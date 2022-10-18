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
	std::time_t time = std::time(0);

	std::cout << "[";
}

void	Account::displayAccountsInfos(void)
{
	std::cout << "accounts:" << getNbAccounts() << ";" << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";" << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit)
{

}
