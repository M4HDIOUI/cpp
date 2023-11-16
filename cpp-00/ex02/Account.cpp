/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 03:59:23 by omahdiou          #+#    #+#             */
/*   Updated: 2023/11/16 19:04:06 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account( int initial_deposit )
{
    initial_deposit = 0;
}

Account::~Account(void) 
{
}

int	Account::getNbAccounts() {
    return Account::_nbAccounts;
}

int	Account::getTotalAmount() {
    return Account::_totalAmount;
}

int	Account::getNbDeposits() {
    return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals() {
    return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos() {
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void    makeDeposit(int deposit)
{
    
}