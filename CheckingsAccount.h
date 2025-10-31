#pragma once
#ifndef _BANKINGSYSTEM_
#define _BANKINGSYSTEM_
#include "Account1.h"

class CheckingAccount : public Account {
	double overDraftLimit;
public:
	//Constructor
	CheckingAccount();
	CheckingAccount(int _id, double _balance, double _overDraftLimitm, Customer * customerptr);
	//Setters
	void setOverdraftlimit(double _overDraftLimit);
	//Getters
	double setOverdraftLimit() const;

};

#endif // !_BANKINGSYSTEM_