#pragma once
#include <string>
using namespace std;

class Customer
{
private:
	string _firstName;
	string _lastName;
public:
	Customer(string, string);
	~Customer();
	string getFullName();
};

