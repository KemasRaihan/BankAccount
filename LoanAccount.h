#pragma once
#include "BankAccount.h"
#include "InterestAccount.h"
#include <iostream>

using namespace std;

class LoanAccount : public InterestAccount
{
public:
 LoanAccount(unsigned long accountNumber, string accountName, int balance, float interestRate);
 bool deposit(int amount);
 bool withdraw(int amount);
};

