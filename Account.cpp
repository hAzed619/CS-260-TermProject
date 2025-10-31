#include "Account.h"
#include <iostream>
//Constructor
Account::Account()
{
	id = 0;
	balance = 0;
	withdrawalCounter = 0;
	depositCounter = 0;
	accountCustomer = nullptr;
}
Account::Account(int _id, double _balance, Customer * customerptr)
{
	setAll(_id, _balance, customerptr);
}
Account::~Account()
{
}
//Setters
void Account::setId(int _id)
{
	if (_id > 0)
	{
		id = _id;
	}
	else
	{
		id = 0;
	}
}
void Account::setBalance(double _balance)
{
	if (_balance > 0)
	{
		balance = _balance;
	}
	else
	{
		balance = 0;
	}
}
void Account::setAccountCustomer(Customer* customerptr)
{
	accountCustomer = customerptr;
}
void Account::setAll(int _id, double _balance, Customer* customerptr)
{
	id = _id;
	balance = _balance;
	accountCustomer = customerptr;
}
//Getters
int Account::getId() const
{
	return id;
}
double Account::getBalance() const
{
	return balance;
}
int Account::getWithdrawalCounter() const
{
	return withdrawalCounter;
}
int Account::getDepositCounter() const
{
	return depositCounter;
}
Customer * Account::getAccountCustomer() const
{
	return accountCustomer;
}
//Other Methods
void Account::depositMoney(double _amount)
{
	if (_amount > 0)
	{
		balance = balance + _amount;
		depositCounter++;
	}
	else
	{
		balance = balance;
	}
}
void Account::withdrawMoney(double _amount)
{
	if (_amount > 0)
	{
		balance = balance + _amount;
		withdrawalCounter++;
	}
	else
	{
		balance = balance;
	}
}
void Account::printInfo()
{
	accountCustomer->printInfo();
	cout << "Account ID: " << id << endl;
	cout << "Balance: $" << balance << endl;
	cout << "# of Withdrawals: " << withdrawalCounter << endl;
	cout << "# of Deposits: " << depositCounter << endl;
}