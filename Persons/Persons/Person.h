#pragma once
using namespace System;

ref class Person
{
public:
	Person(String^ cod);
	static Person();
	void SetName(String^ nume);
	String^ GetName();
	void SetSurname(String^ prenume);
	String^ GetSurname();
	void SetCnp(String^ cod);
	String^ GetCnp();
	void SetAddress(String^ adresa);
	String^ GetAddress();
	void SetAge(int varsta);
	int GetAge();
	void SetSex(bool gen);
	bool GetSex();
	static int GetCount();

private:
	String^ name;
	String^ surname;
	String^ cnp;
	String^ address;
	unsigned int age;
	bool sex;
	static int count;


};
