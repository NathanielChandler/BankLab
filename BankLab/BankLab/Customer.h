#pragma once
#include <string>
class Customer
{
private:
	std::string _firstName;
	std::string _lastName;
public:
	Customer(std::string, std::string);
	~Customer();
	std::string getFullName();
};

