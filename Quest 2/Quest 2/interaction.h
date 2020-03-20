#pragma once
#include "account.h"
#include "database.h"

class interaction {
public:
	void authorization(int id, int pin){}
	void registration(int id, int pin){}
	void balance(){}
	void transfer(float value, account account1, account account2){}
	void logout(){}
	void terminate(char choice){}
private:
	
};