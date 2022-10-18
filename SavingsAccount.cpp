#include "SavingsAccount.h"
#include "LoanAccount.h"
#include "BankAccount.h"
#include <iostream>

using namespace std;

SavingsAccount::SavingsAccount(unsigned long accountNumber, string accountName, int balance, float interestRate, int subBalance) : InterestAccount(accountNumber, accountName, balance, interestRate)
{
 this->subBalance = subBalance;
}

bool SavingsAccount::deposit(int amount)
{
 changeBalance(amount);
 return true;
}

bool SavingsAccount::withdraw(int amount)
{
 cout << "\nYou cannot withdraw from your loan account, only repay." << "\n";
 return false;
}
