#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <string>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:";
	std::cout << _accountIndex;
	std::cout << ";amount:";
	std::cout << _amount;
	std::cout << ";created" << std::endl;
}

Account::Account(void)
{
	_accountIndex = _nbAccounts;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:";
	std::cout << _accountIndex;
	std::cout << ";amount:";
	std::cout << _amount;
	std::cout << ";closed" << std::endl;
	_accountIndex = _nbAccounts - 1;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:";
	std::cout << _accountIndex;
	std::cout << ";p_amount:";
	std::cout << _amount;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << ";deposit:";
	std::cout << deposit;
	std::cout << ";amount:";
	std::cout << _amount;
	std::cout << ";nb_deposits:";
	std::cout << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if ((_amount - withdrawal) < 0)
	{
		_displayTimestamp();
		std::cout << "index:";
		std::cout << _accountIndex;
		std::cout << ";p_amount:";
		std::cout << _amount;
		std::cout << ";withdrawal:refused" << std::endl;
		;
		return (false);
	}
	else
	{
		_displayTimestamp();
		std::cout << "index:";
		std::cout << _accountIndex;
		std::cout << ";p_amount:";
		std::cout << _amount;
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		std::cout << ";withdrawal:";
		std::cout << withdrawal;
		std::cout << ";amount:";
		std::cout << _amount;
		std::cout << ";nb_withdrawals:";
		std::cout << _nbWithdrawals << std::endl;
		return (true);
	}
}
int Account::checkAmount(void) const
{
	return (_totalAmount);
}
void Account::_displayTimestamp(void)
{
	char	buffer[20];

	std::time_t result = std::time(nullptr);   // Get current time
	std::tm *tm_ptr = std::localtime(&result); // Convert to local time
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", tm_ptr);
	std::cout << buffer;
}
void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:";
	std::cout << _accountIndex;
	std::cout << ";amount:";
	std::cout << _amount;
	std::cout << ";deposits:";
	std::cout << _nbDeposits;
	std::cout << ";withdrawals:";
	std::cout << _nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:";
	std::cout << _nbAccounts;
	std::cout << ";total:";
	std::cout << _totalAmount;
	std::cout << ";deposits:";
	std::cout << _totalNbDeposits;
	std::cout << ";withdrawals:";
	std::cout << _totalNbWithdrawals << std::endl;
}
int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}
