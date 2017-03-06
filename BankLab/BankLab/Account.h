#pragma once
#include "Customer.h"
class Account
{
private:
	int _accountNumber;
	int _balanceInPennies = 0;
	Customer _accountOwner;
public:
	Account(Customer,int);
	~Account();
	void Deposit(int);
	void Withdraw(int);
	int getBalance(int);
};

