#include <iostream>
#include <string>
#include "Customer.h"
#include "Account.h"
using namespace std;
void menu();

int main()
{
	int opt;
	menu();
	cin >> opt;
	while (opt != 6)
	{


		menu();
		cin >> opt;
	}

	Customer* accCustomer = nullptr;


	system("pause");
	return 0;
}
void menu()
{
	cout << "------------------MENU---------------------" << endl;
	cout << "1. Create a Checking Account." << endl;
	cout << "2. Create a Saving Account." << endl;
	cout << "3. View Account Information." << endl;
	cout << "4. Modify or Delete Account." << endl;
	cout << "5. Transfer between Accounts." << endl;
	cout << "6. Exit Program." << endl;
}