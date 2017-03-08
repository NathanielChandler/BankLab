#pragma once
#include "Bank.h"
#include <iostream>
using namespace std;

Bank bank = Bank("Bank of Ocellot");

void DisplayMenu();
void Transact();
void AddAccountMenu();
void DisplayAccountMenu();
void DisplayLog();

int main()
{
	cout << bank.getName() << endl;
	DisplayMenu();
	return 0;
}

void DisplayMenu()
{
	int choice = 0;

	do
	{
		system("cls");
		cout << "Welcome to " + bank.getName() << endl;
		cout << "1) Add Account\n"
			<< "2) Transact\n"
			<< "3) Display Accounts\n"
			<< "4) Display Account Log\n";
		cout << "What would you like to do? " << endl;

		cin >> choice;

		switch (choice)
		{
		case 1:
			AddAccountMenu();
			break;
		case 2:
			Transact();
			break;
		case 3:
			DisplayAccountMenu();
			break;
		case 4:
			DisplayLog();
		default: break;
		}
	} while (choice != 9);

}

void Transact()
{
	system("cls");
	cout << "Which Account?" << endl;
	cout << bank.ListAccounts() << endl;

	int chosenAccount;
	cin >> chosenAccount;

	system("cls");
	cout << "1) Deposit\n"
		<< "2) Withdraw" << endl;

	int transactionType;
	cin >> transactionType;

	system("cls");
	cout << "How Much? (in pennies)" << endl;
	int pennies;
	cin >> pennies;

	switch (transactionType)
	{
	case 1:
		bank.Deposit(chosenAccount, pennies);
		break;
	case 2:
		bank.Withdraw(chosenAccount, pennies);
		break;
	default:
		break;
	}
}

void AddAccountMenu()
{
	system("cls");
	cout << "Customer firstname: ";
	string firstName;
	cin >> firstName;

	cout << "Customer lastname: ";
	string lastName;
	cin >> lastName;

	cout << "Account Number: ";
	int accountNumber;
	cin >> accountNumber;

	Customer customer = Customer(firstName, lastName);
	Account account = Account(customer, accountNumber);
	bank.CreateAccount(account);
}

void DisplayAccountMenu()
{
	system("cls");
	cout << bank.ShowAccounts();
	char filler;
	cin >> filler;
}

void DisplayLog()
{
	system("cls");
	cout << "Which Account?" << endl;
	cout << bank.ListAccounts() << endl;

	int chosenAccount;
	cin >> chosenAccount;

	system("cls");
	cout << bank.ViewLog(chosenAccount) << endl;
	char filler;
	cin >> filler; 
}
