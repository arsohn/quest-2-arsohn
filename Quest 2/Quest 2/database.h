#pragma once
#include <vector>
#include "account.h"

class database {
public:	
	database(){}

	void append(account const& a) {}
private:
	vector<account> accounts;
};