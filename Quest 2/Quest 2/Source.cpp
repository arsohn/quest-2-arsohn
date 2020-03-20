#include <iostream>
#include "account.h"
#include "database.h"
#include "interaction.h"

using namespace std;



int main() {
	char choice;
	char choice2 = 'y';
	interaction ATMMachine;
	
	while (choice2 != 'n') {
		cout << "Please choose one of the following options - " << endl << endl;
		cout << "[A]uthorization, access an account" << endl
			<< "[R]egistration, create an account" << endl
			<< "[B]alance, display the balance of an account" << endl
			<< "[T]ransfer, transfer funds to and from account" << endl
			<< "[L]ogout, logout from current account" << endl
			<< "[C]ancel, exit the program completely" << endl;
		cout << "Choice: ";
		cin >> choice;

		switch (choice) {
		case 'A': int id, pin;
		case 'a': cout << "Please enter your id number: ";
				  cin >> id;
				  cout << "Please enter your pin number";
				  cin >> pin;
				  ATMMachine.authorization(id, pin);
				  break;

		case 'R': int id, pin;
		case 'r': cout << "Please enter your id number: ";
				  cin >> id;
				  cout << "Please enter your pin number";
				  cin >> pin;
				  ATMMachine.registration(id, pin);
				  break;

		case 'B':
		case 'b': ATMMachine.balance();
				  break;

		case 'T': float value;
		case 't': cout << "Please enter the desired amount to be transfered: ";
				  cin >> value;
				  
				  int id;
				  cout << "Enter the account number that you would like to transfer money too: ";
				  cin >> id;
				  
				  
				  ATMMachine.transfer(value);
				  break;

		case 'L': ATMMachine.logout();
		case 'l':
			break;

		case 'C': ATMMachine.terminate();
		case 'c':  
			break;
		}
	}
	return 0;
}