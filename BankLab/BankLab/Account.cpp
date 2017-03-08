#include "Account.h"





Account::Account(Customer customer, int accountNumber) : _accountOwner(customer), _accountNumber(accountNumber)
{
}

Account::~Account()
{
}

void Account::Deposit(int numberOfPennies)
{
	_balanceInPennies += numberOfPennies;
	string message;
	message += "Deposited " + getBalanceString() + " into account";
	log.push_back(message);
	//TODO: Add message to log
}

void Account::Withdraw(int numberOfPennies)
{
	if (numberOfPennies < _balanceInPennies)
	{
		_balanceInPennies -= numberOfPennies;
		string message;
		message += "Withdrew " + getBalanceString() + " from account";
		log.push_back(message);
		//TODO: Add message to log
	}
}

int Account::getBalance()
{
	return _balanceInPennies;
}

int Account::getAccountNumber()
{
	return _accountNumber;
}

string Account::getAccountName()
{

	return _accountOwner.getFullName();
}

string Account::getBalanceString()
{
	string balance = "$"
		+ to_string(_balanceInPennies / 100) + "."
		+ to_string(_balanceInPennies % 100);
	return balance;
}

string Account::getLog()
{
	string toSend;
	for (auto entry : log)
	{
		toSend += entry + "\n";
	}
	return toSend;
}
