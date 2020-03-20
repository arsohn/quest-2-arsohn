#include "account.h"

bool account::pay_in(float value) {
	if (value < 0) {
		return false;
	}
	
	this->balance += value;

	return true;
}

bool account::pay_out(float value) {
	if (value < 0) {
		return false;
	}
	
	this->balance -= value;
	
	return true;
}

account::account() {

}