#pragma once
#ifndef _ACCOUNT_
#define _ACCOUNT_
#include <string>
#include "Customer.h"
using namespace std;

class Account {
	int id;
	double balance;
	int withdrawalCounter = 0;
	int depositCounter = 0;
	//accountCustomer
	Customer* accountCustomer = nullptr;
public:
	//setter
	void setId(int _id);
	void setBalance(double _balance);
	void setAccountCustomer(Customer* _customerPtr);
	void setAll(int _id, double _balance, Customer* customerptr);
	//getter
	int getId() const;
	double getBalance() const;
	int getWithdrawalCounter() const;
	int getDepositCounter() const;
	Customer* getAccountCustomer() const;
	// default constructor
	Account();
	//constructor
	Account(int _id, double _balance, Customer * customerptr);
	//extra function
	void depositMoney(double _amount);
	void withdrawMoney(double _amount);
	void printInfo();
};

#endif // !_ACCOUNT_