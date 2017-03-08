#include "Account.h"





Account::Account(Customer customer, int accountNumber) : _accountOwner(customer), _accountNumber(accountNumber)
{
}

Account::~Account()
{
}

void Account::Deposit(int numberOfPennies)
{
	_accountNumber += numberOfPennies;
}

void Account::Withdraw(int numberOfPennies)
{
	_balanceInPennies -= numberOfPennies;
}

int Account::getBalance(int)
{
	return _balanceInPennies;
}

int Account::getAccountNumber()
{
	return _accountNumber;
}
