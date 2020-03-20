#include "database.h"

void database::append(account const& a) {
	this->accounts.push_back(a);
}

bool database::find(int id, account& account) {
	for (int i = 0; i < this->accounts.size(); i++) {
		if (id == this->accounts.at[i]) {
			account = accounts.at[i];
			return true;
		}
	}


	return false;
}