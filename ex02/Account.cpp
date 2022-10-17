/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <amarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:26:28 by amarchan          #+#    #+#             */
/*   Updated: 2022/10/17 18:48:58 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <sstream>      // std::stringstream
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 20049;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// default constructor
Account::Account()
{}

// constructor
Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	std::cout << "index:"
				<< _accountIndex
				<< ";amount:"
				<< _amount
				<< ";created"
				<< std::endl;
}

// destructor
Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:"
				<< _accountIndex
				<< ";amount:"
				<< _amount
				<< ";closed"
				<< std::endl;
}

int Account::getNbAccounts()
{
	return _nbAccounts;
}

int Account::getTotalAmount()
{
	return _totalAmount;
}

int Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

void	Account::_displayTimestamp()
{
	char prev;
	std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);	
    std::cout << "["
			<< (now->tm_year + 1900)
         	<< (now->tm_mon + 1)
         	<<  now->tm_mday
		 	<< "_";
	prev = std::cout.fill ('0');
  	std::cout.width (2);
	std::cout << now->tm_hour;
	// std::cout << 2;
	prev = std::cout.fill ('0');
  	std::cout.width (2);
	std::cout << now->tm_min;
	// std::cout << 2;
	prev = std::cout.fill ('0');
  	std::cout.width (2);
	std::cout << now->tm_sec << "] ";
	// std::cout << 2;
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:"
				<< _nbAccounts
				<< ";total:"
				<< _totalAmount
				<< ";deposits:"
				<< _totalNbDeposits
				<< ";withdrawals:"
				<< _totalNbWithdrawals
				<< std::endl; 
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:"
				<< _accountIndex
				<< ";amount:"
				<< _amount
				<< ";deposits:"
				<< _nbDeposits
				<< ";withdrawals:"
				<< _nbWithdrawals
				<< std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:"
			<< _accountIndex
			<< ";p_amount:"
			<< _amount
			<< ";deposit:"
			<< deposit
			<< ";amount:"
			<< _amount + deposit
			<< ";nb_deposits:"
			<< _nbDeposits + 1
			<< std::endl;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits += _nbDeposits;
	_amount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:"
				<< _accountIndex
				<< ";p_amount:"
				<< _amount;
	if (withdrawal > _amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (0);
	}
	std::cout << ";withdrawal:"
				<< withdrawal
				<< ";amount:"
				<< _amount - withdrawal
				<< ";nb_withdrawals:"
				<< _nbWithdrawals + 1
				<< std::endl;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals += _nbWithdrawals;
	_amount -= withdrawal;
	return (1);
}

