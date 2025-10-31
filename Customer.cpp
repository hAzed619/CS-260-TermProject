#include "Customer.h"
#include <iostream>
//Constructors
Customer::Customer()
{
	fName = " ";
	lName = " ";
	address = " ";
	phoneNum = " ";
	email = " ";
}
Customer::Customer(string _fName, string _lName, string _address, string _phoneNum, string _email)
{
	setAll(_fName, _lName, _address, _phoneNum, _email);
}
//Destructor
Customer::~Customer()
{
}
//Setters
void Customer::setfName(string _fName)
{
	fName = _fName;
}
void Customer::setlName(string _lName)
{
	lName = _lName;
}
void Customer::setAddress(string _address)
{
	address = _address;
}
void Customer::setphoneNum(string _phoneNum)
{
	phoneNum = _phoneNum;
}
void Customer::setEmail(string _email)
{
	email = _email;
}
void Customer::setAll(string _fName, string _lName, string _address, string _phoneNum, string _email)
{
	fName = _fName;
	lName = _lName;
	address = _address;
	phoneNum = _phoneNum;
	email = _email;
}
//Getters
string Customer::getFname() const
{
	return fName;
}
string Customer::getlName() const
{
	return lName;
}
string Customer::getAddress() const
{
	return address;
}
string Customer::getPhoneNum() const
{
	return phoneNum;
}
string Customer::getEmail() const
{
	return email;
}
//Methods
void Customer::printInfo()
{
	cout << "----------Customer Information----------";
	cout << "First Name: " << fName << endl;
	cout << "Last Name: " << lName << endl;
	cout << "Address: " << address << endl;
	cout << "Phone number: " << phoneNum << endl;
	cout << "Email: " << email << endl;
}