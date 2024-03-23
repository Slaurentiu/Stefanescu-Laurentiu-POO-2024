#include "pch.h"

using namespace System;
void DisplayWelcome();
void DisplayProjectedValue(double amount, int years, double rate);
double GetInvestmentAmount();
int GetInvestmentPeriod(int min = 10, int max = 25);

int main(array<System::String ^> ^args)
{
    DisplayWelcome();
    return 0;
}

void DisplayWelcome()
{
    Console::WriteLine("--------------------------------");
    Console::WriteLine(
        "Welcome to your friendly Investment Planner");
    Console::WriteLine("---------------------------------");
    Console::WriteLine("\nIllustration...");
    DisplayProjectedValue(10000, 25, 6.0);
    Console::WriteLine("\nEnter details for your investment:");
    double sum = GetInvestmentAmount();
    int period = GetInvestmentPeriod(5, 25);
    return;
}

void DisplayProjectedValue(double amount, int years, double rate)
{
    double rateFraction = 1 + (rate / 100);
    double finalAmount = amount * Math::Pow(rateFraction, years);
    finalAmount = Math::Round(finalAmount, 2);
    Console::Write("Investment amount: ");
    Console::WriteLine(amount);
    Console::Write("Growth rate [%]: ");
    Console::WriteLine(rate);
    Console::Write("Period [years]: ");
    Console::WriteLine(years);
    Console::Write("Projected final value of investment: ");
    Console::WriteLine(finalAmount);
    return;
}

int GetInvestmentPeriod(int min, int max)
{
    Console::Write("Over how many years [");
    Console::Write("min=");
    Console::Write(min);
    Console::Write(", max=");
    Console::Write(max);
    Console::Write("] ? ");
    String^ input = Console::ReadLine();
    int years = Convert::ToInt32(input);
    return years;
}

double GetInvestmentAmount()
{
    Console::Write("How much money do you want to invest? ");
    String^ input = Console::ReadLine();
    double amount = Convert::ToDouble(input);
    return amount;
}