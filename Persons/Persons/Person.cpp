#include "pch.h"
#include "Person.h"

#using <mscorlib.dll>
using namespace System;

Person::Person(String^ cod)
{
	cnp = cod;
	count++;
}
static Person::Person()
{
	count = 0;
}
void Person::SetName(String^ nume)
{
	name = nume;
}
String^ Person::GetName()
{
	return name;
}
void Person::SetSurname(String^ prenume)
{
	surname = prenume;
}
String^ Person::GetSurname()
{
	return surname;
}
void Person::SetCnp(String^ cod)
{
	cnp = cod;
}
String^ Person::GetCnp()
{
	return cnp;
}
void Person::SetAddress(String^ adresa)
{
	address = adresa;
}
String^ Person::GetAddress()
{
	return address;
}
void Person::SetAge(int varsta)
{
	age = varsta;
}
int Person::GetAge()
{
	return age;
}
void Person::SetSex(bool gen)
{
	sex = gen;
}
bool Person::GetSex()
{
	return sex;
}
int Person::GetCount()
{
	return count;
}
