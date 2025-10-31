#pragma once
#ifndef _SAVINGACCOUNT_
#define _SAVINGACCOUNT_
#include <iostream>
#include "Account.h"
#include "Customer.h"
using namespace std;

class SavingAccount : public Account {
private:
	double interestRate;
public:
	//contructor
	SavingAccount();
	SavingAccount(int _id, double _balance, double _interestRate, Customer* customerInfo);
};

#endif // !_SAVINGACCOUNT_