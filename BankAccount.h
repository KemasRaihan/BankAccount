#pragma once
#include <iostream>

using namespace std;

class BankAccount
{
private:
	unsigned long accountNumber;
	string accountName;
	int balance;

protected:
	void setAccountName(string accountName);
	void setAccountNumber(unsigned long accountNumber);
	void changeBalance(int amount);

public:
	BankAccount();
	BankAccount(unsigned long accountNumber, string accountName, int balance);
	virtual~BankAccount();
	void printSummary();
	int getBalance(); // returns the balance in pence
	virtual bool deposit(int amount)=0;
	virtual bool withdraw(int amount)=0;
	const string getAccountName() const;


};

