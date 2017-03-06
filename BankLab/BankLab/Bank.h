#pragma once
#include "Account.h"
#include <string>
#include <vector>
class Bank
{
public:
	std::string _name;
	std::vector<Account> _account;
public:
	Bank(std::string);
	~Bank();
	std::string getName();
};

