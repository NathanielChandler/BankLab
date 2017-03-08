#pragma once
#include "Customer.h"
#include <vector>
class Account
{
private:
	int _accountNumber;
	int _balanceInPennies = 0;
	Customer _accountOwner;
	vector<string> log;
public:
	Account(Customer,int);
	~Account();
	void Deposit(int);
	void Withdraw(int);
	int getBalance();
	int getAccountNumber();
	string getAccountName();
	string getBalanceString();
	string getLog();
};

