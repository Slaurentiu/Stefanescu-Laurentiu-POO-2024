#include "pch.h"
#include "Cars.h"


using namespace System;

Car::Car(int ID, String^ make, String^ mod, int year, String^ color, double price, double KM, int loc)
	:Id(ID), marca(make), model(mod), an(year), culoare(color), pret(price), km(KM), locuri(loc)				// initializare parametri la crearea obiectului
{
	Console::WriteLine("Am creat o masina noua: " + this->marca + " " + this->model);
	counter++;
}
Car::~Car()
{
	Console::WriteLine("Am sters masina "+this->marca + " "+this->model);
	counter--;
}
void Car::SetKm(double rulaj)
{
	km = rulaj;
}
double Car::GetKm()
{
	return km;
}
void Car::SetPret(double price)				//actualizare pret
{
	pret = price;
}
double Car::GetPret()
{
	return pret;
}

int Car::GetLocuri()
{
	return locuri;
}
String^ Car::GetMarca()
{
	return marca;
}
String^ Car::GetModel()
{
	return model;
}
String^ Car::GetCuloare()
{
	return culoare;
}
int Car::GetAn()
{
	return an;
}
void Car::BackKm()
{
	if (km > 200000)
	{
		km -= 100000;
		Console::WriteLine("Am dat km inapoi la masina " + this->marca);
	}
	else
	{
		Console::WriteLine("Nu se pot da km inapoi la masina " + this->marca);

	}
}
int Car::GetCounter()
{
	return counter;
}
int Car::GetId()
{
	return Id;
}
void Car::afis(List<Car^>^ Lista)
{
	Console::WriteLine();
	Console::WriteLine("Marca  Model  An  Culoare  Pret(E)  Km   Locuri ");
	Console::WriteLine("================================================");
	for each (Car ^ car in Lista)
	{
		Console::WriteLine(car->GetMarca() + "\t" + car->GetModel() + "\t" + car->GetAn() + "\t" + car->GetCuloare() + "\t" + car->GetPret() + "\t" + car->GetKm() + "\t" + car->GetLocuri());
	}
	Console::WriteLine("Avem " + counter + " masini");
}