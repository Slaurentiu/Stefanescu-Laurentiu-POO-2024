#pragma once

ref class CreditCardAccount
{
public:
	CreditCardAccount(long number, double limit);
	void SetCreditLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	long GetAccountNumber();
	static int GetNumberOfAccounts();
	static CreditCardAccount();
	literal System::String ^name = "Super Platinum Card";


private:
	long accountNumber;
	double currentBalance;
	double creditLimit;
	static int numberOfAccounts = 0;
	static double interestRate;


};
