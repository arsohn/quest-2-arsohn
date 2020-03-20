#include "interaction.h"
#include "account.h"
#include <iostream>


void interaction::authorization(int id, int pin) {
	
}
void interaction::registration(int id, int pin) {

}
void interaction::balance() {
	std::cout << "$" << this->account.balance << endl;
}
void interaction::transfer(float value, account account1, account account2) {
	
}
void interaction::logout() {

}
void interaction::terminate(char choice) {

	cin >> 
}