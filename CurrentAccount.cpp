#include "CurrentAccount.h"
#include <iostream>

using namespace std;

CurrentAccount::CurrentAccount(unsigned long accountNumber, const string accountName, int balance) : BankAccount(accountNumber, accountName, balance)
{

}

bool CurrentAccount::withdraw(int amount)
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

bool CurrentAccount::deposit(int amount)
{
 changeBalance(amount);
 return true;
}