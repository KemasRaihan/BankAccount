#include "BankAccount.h"
#include <iostream>

using namespace std;

BankAccount::BankAccount()
{
	balance = 0;
}

BankAccount::BankAccount(unsigned long accountNumber, string accountName, int balance)
{
	this->accountNumber = accountNumber;
	this->accountName = accountName;
	this->balance = balance;
}

BankAccount::~BankAccount()
{

}

void BankAccount::printSummary()
{
	cout << "\nSummary: \x9C" << balance << "\n";
}

/**setter methods**/
void BankAccount::setAccountName(string accountName)
{
	this->accountName = accountName;
}

void BankAccount::setAccountNumber(unsigned long accountNumber)
{
	this->accountNumber = accountNumber;
}

/**getter methods**/
int BankAccount::getBalance()
{
	return balance;
}


void BankAccount::changeBalance(int amount)
{
	balance += amount;
}

const string BankAccount::getAccountName() const
{
	return accountName;
}