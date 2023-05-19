#include <iostream>
#include "Account.hpp"

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << " accounts" << getNbAccounts() << ';total:' << getTotalAmount() << \
				";deposits:" << getNbDeposits() << "withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account( int initial_deposit )
	:	_accountIndex(_nbAccounts)
	,	_amount(initial_deposit)
	,	_nbDeposits(0)
	,	_nbWithdrawals(0)
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ';amount:' << _amount << ";created" << std::endl;
	_nbAccounts++;
	_totalAmount += initial_deposit;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ';amount:' << _amount << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();

}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();

}

int		Account::checkAmount( void ) const
{
	_displayTimestamp();

}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ';amount:' << _amount << \
				";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}