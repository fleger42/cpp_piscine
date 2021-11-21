#include "Account.class.hpp"
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
#include<ctime>

void	Account::displayAccountsInfos(void)
{
	std::time_t t = std::time(0);
	std::cout << "[" << t << "] " << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals<< std::endl;
}

Account::Account(int initial_deposit)
{
	std::time_t t = std::time(0);
	Account::_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts+=1;
	Account::_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	Account::_nbDeposits = 0;
	Account::_nbWithdrawals = 0;
	std::cout << "[" << t << "] " << "index:" << Account::_accountIndex << ";amount:" << Account::_amount << ";created" << std::endl;
	return;
}

void Account::_displayTimestamp( void )
{

}

Account::~Account(void)
{
	Account::_nbAccounts--;
	std::time_t t = std::time(0);
	std::cout << "[" << t << "] " << "index:" << Account::_accountIndex << ";amount:" << Account::_amount << ";closed" << std::endl;
	return ;
}

void Account::displayStatus(void) const
{
	std::time_t t = std::time(0);
	std::cout << "[" << t << "] " << "index:" << Account::_accountIndex << ";amount:" << Account::_amount << ";deposits:" << Account::_nbDeposits << ";withdrawals:" << Account::_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_amount+=deposit;
	Account::_totalNbDeposits++;
	Account::_nbDeposits++;
	Account::_totalAmount+=deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	std::time_t t = std::time(0);
	if(withdrawal > Account::_amount)
		std::cout << "[" << t << "] " << "index:" << Account::_accountIndex << ";p_amount:" << Account::_amount << ";withrawal:refused" << std::endl;
	else
	{
		Account::_totalNbWithdrawals++;
		Account::_nbWithdrawals++;
		std::cout << "[" << t << "] " << "index:" << Account::_accountIndex << ";p_amount:" << Account::_amount << ";withrawal:" << withdrawal << ";amount:" << Account::_amount - withdrawal << ";nb_withdrawals:" << Account::_nbWithdrawals << std::endl;
		Account::_amount-=withdrawal;
		Account::_totalAmount-=withdrawal;
	}
	return(1);
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;