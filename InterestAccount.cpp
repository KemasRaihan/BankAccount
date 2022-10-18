#include "InterestAccount.h"
#include "BankAccount.h"
#include <iostream>

using namespace std;

InterestAccount::InterestAccount(unsigned long accountNumber, string accountName, int balance, float interestRate) : BankAccount(accountNumber, accountName, balance)
{
 this->interestRate = interestRate;
}

bool InterestAccount::deposit(int amount)
{
 changeBalance(amount);
 return true;
}

bool InterestAccount::withdraw(int amount)
{
 if (amount < getBalance())
 {
  changeBalance(-amount);
  return true;
 }
 else
 {
  cout << "Invalid input. Not enough funds." << "\n";
  return false;
 }
}

void InterestAccount::setInterestRate(float interestRate)
{
 this->interestRate = interestRate;
}
void InterestAccount::updateInterest()
{

}