#include "Bank.h"



Bank::Bank(string name) : _name(name)
{
}


Bank::~Bank()
{
}

string Bank::getName()
{
	return _name;
}

void Bank::CreateAccount(Account newAccount)
{
	_account.push_back(newAccount);
}

string Bank::ShowAccounts()
{
	string output = "Accounts for " + _name + "\n";
	for (auto account : _account)
	{
		output += to_string(account.getAccountNumber()) + "\n";
	}
	return output;
}

string Bank::ListAccounts()
{
	string output = "Accounts for " + _name + "\n";
	int iteration = 0;
	for (auto account : _account)
	{
		iteration++;
		output +=to_string(iteration) +") "+ to_string(account.getAccountNumber()) + "\n";
	}
	return output;
}

void Bank::Deposit(int accountNumber, int amount)
{
	for (auto account : _account) 
	{
		if (account.getAccountNumber = accountNumber)
		{
			account.Deposit(amount);
			return;
		}
	}
}

void Bank::Withdraw(int accountNumber, int amount)
{
	for (auto account : _account)
	{
		if (account.getAccountNumber = accountNumber)
		{
			account.Withdraw(amount);
			return;
		}
	}
}
