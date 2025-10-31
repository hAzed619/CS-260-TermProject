#pragma once
#ifndef _CUSTOMER_
#define _CUSTOMER_
#include <string>
using namespace std;

class Customer {
	string fName, lName, address, phoneNum, email;
	

public:
	//Constructor
	Customer();
	Customer(string _fName, string _lName, string _address, string _phoneNum, string _email);
	//Destructor
	~Customer();

	//Setters
	void setfName(string _firstName);
	void setlName(string _lastName);
	void setAddress(string _address);
	void setphoneNum(string _phoneNum);
	void setEmail(string _email);
	void setAll(string _fName, string _lName, string _address, string _phoneNum, string _email);
	void printInfo();

	//Getters
	string getFname() const;
	string getlName() const;
	string getAddress() const;
	string getPhoneNum() const;
	string getEmail() const;


};

#endif // !_CUSTOMER_


