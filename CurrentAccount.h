#pragma once
#include "BankAccount.h"
#include <iostream>

using namespace std;


class CurrentAccount : public BankAccount
{
public:
	CurrentAccount(unsigned long number, const string name, int balance);
	bool deposit(int amount);
	bool withdraw(int amount);
};

