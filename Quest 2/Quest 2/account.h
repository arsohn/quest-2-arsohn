#pragma once
class account {
public:
	bool pay_in(float value);
	bool pay_out(float value);
	int id;
	int pin;
	float balance = 0.0;
};

void transfer(float value, account account1, account account2) {
	account1.pay_in(value);
	account2.pay_out(value);
};

