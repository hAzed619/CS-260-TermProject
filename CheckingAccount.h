#pragma once
#ifndef _CHECKINGACCOUNT_
#define _CHECKINGACCOUNT_
#include "Account.h"

class CheckingAccount : public Account {
	double overDraftLimit;
public:
	//Constructor
	CheckingAccount();
	CheckingAccount(int _id, double _balance, Customer* _customerptr, double _overDraftLimit) : Account(_id, _balance, _customerptr);
	//Setters
	void setOverdraftlimit(double _overDraftLimit);
	//Getters
	double setOverdraftLimit() const;
	//setAll
	void setAll(int _id, double _balance, Customer* _customerptr, double _overDraftLimit);
	//extra function
	void withdrawMoney(double _amount);

};

#endif // !_CHECKINGACCOUNT_