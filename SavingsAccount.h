#pragma once
#include "InterestAccount.h"
#include "BankAccount.h"
class SavingsAccount : public InterestAccount
{
private:
 int subBalance; // balance per month

public:
 SavingsAccount(unsigned long accountNumber, string accountName, int balance, float interestRate, int subBalance);
 bool deposit(int amount);
 bool withdraw(int amount);
};

