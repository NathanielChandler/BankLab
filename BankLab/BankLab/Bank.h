#pragma once
#include "Account.h"
#include <string>
#include <vector>
using namespace std; 

class Bank
{
public:
	string _name;
	vector<Account> _account;
public:
	Bank(string);
	~Bank();
	string getName();
	void CreateAccount(Account);
	string ShowAccounts();
	string ListAccounts();
	void Deposit(int accountNumber, int amount);
	void Withdraw(int accountNumber, int amount);
	string ViewLog(int accountNumber);
};

