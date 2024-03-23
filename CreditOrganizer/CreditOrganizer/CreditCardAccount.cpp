#include "pch.h"
//#include "stdafx.h"
#include "CreditCardAccount.h"

#using <mscorlib.dll>
using namespace System;

CreditCardAccount::CreditCardAccount(long number, double limit)
{
	accountNumber = number;
	creditLimit = limit;
	currentBalance = 0.0;
	numberOfAccounts++;
	Console::Write("This is account number ");
	Console::WriteLine(numberOfAccounts);
	scheme = nullptr;
}

void CreditCardAccount::SetCreditLimit(double amount)
{
	creditLimit = amount;

}

bool CreditCardAccount::MakePurchase(double amount)
{
	if (currentBalance + amount > creditLimit)
	{
		return false;
	}
	else
	{
		currentBalance += amount;
		// If current balance is 50% (or more) of credit limit...
		if (currentBalance >= creditLimit / 2)
		{
			// If LoyaltyScheme object doesn't exist yet...
			if (scheme == nullptr)
			{
				// Create it
				scheme = gcnew LoyaltyScheme();
			}
			else
			{
				// LoyaltyScheme already exists,
				// so accrue bonus points
				scheme->EarnPointsOnAmount(amount);
			}
		}
		return true;
	}
}




void CreditCardAccount::MakeRepayment(double amount)
{
	currentBalance -= amount;
}

void CreditCardAccount::PrintStatement()
{
	Console::Write("Current balance: ");
	Console::WriteLine(currentBalance);
}

long CreditCardAccount::GetAccountNumber()
{
	return accountNumber;
}

int CreditCardAccount::GetNumberOfAccounts()
{
	return numberOfAccounts;
}

static CreditCardAccount::CreditCardAccount()
{
	interestRate = 4.5;
	Console::WriteLine("Static constructor called");
}

void CreditCardAccount::RedeemLoyaltyPoints()
{
	// If the LoyaltyScheme object doesn't exist yet...
	if (scheme == nullptr)
	{
		// Display an error message
		Console::WriteLine("Sorry, you do not have a "
			"loyalty scheme yet");
	}
	else
	{
		// Tell the user how many points are currently available
		Console::Write("Points available: ");
		Console::Write(scheme->GetPoints());
		Console::Write(". How many points do you want "
			" to redeem? ");
		// Ask the user how many points they want to redeem
		String^ input = Console::ReadLine();
		int points = Convert::ToInt32(input);
		// Redeem the points
		scheme->RedeemPoints(points);
		// Tell the user how many points are left
		Console::Write("Points remaining: ");
		Console::WriteLine(scheme->GetPoints());
	}
}

