#include "LoanAccount.h"
#include "InterestAccount.h"
#include "BankAccount.h"
#include <iostream>

using namespace std;

LoanAccount::LoanAccount(unsigned long accountNumber, string accountName, int balance, float interestRate) : InterestAccount(accountNumber, accountName, balance, interestRate)
{

}

bool LoanAccount::deposit(int amount)
{
 changeBalance(amount);
 return true;
}

bool LoanAccount::withdraw(int amount)
{
  cout << "\nYou cannot withdraw from your loan account, only repay." << "\n";
  return false;
}
