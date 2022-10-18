#pragma once
#include "BankAccount.h"
#include <iostream>

class InterestAccount : public BankAccount
{
private:
 float interestRate; // as percentage

public:
 InterestAccount(unsigned long accountNumber, string accountName, int balance, float interestRate);
 bool deposit(int amount) = 0;
 bool withdraw(int amount) = 0;
 void setInterestRate(float interestRate);
 void updateInterest();
};

