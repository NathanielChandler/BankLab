#include "Customer.h"



Customer::Customer(string first, string last) : _firstName(first), _lastName(last)
{
}


Customer::~Customer()
{
}

string Customer::getFullName()
{
	return _lastName + ", " + _firstName ;
}
