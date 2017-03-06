#include "Customer.h"



Customer::Customer(std::string first, std::string last) : _firstName(first), _lastName(last)
{
}


Customer::~Customer()
{
}

std::string Customer::getFullName()
{
	return _lastName + ", " + _firstName ;
}
