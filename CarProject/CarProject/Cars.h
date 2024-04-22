#pragma once

using namespace System;
using namespace System::Collections::Generic;									//pentru list

ref class Car 
{
public:
	Car(String^ , String^ , int , String^ , double, double, int );				//constructor
	~Car();																		//destructor
	String^ GetMarca();
	String^ GetModel();
	String^ GetCuloare();
	int GetAn();
	int GetLocuri();
	double GetKm();
	void SetKm(double);
	double GetPret();
	void SetPret(double);
	void BackKm();
	static int GetCounter();
	static void afisare(List<Car^>^ Lista);
	static int CompareByPret(Car^, Car^);
	static void SortByPret(List<Car^>^ Lista);
	static int CompareByMarca(Car^, Car^);
	static void SortByMarca(List<Car^>^ Lista);
	
private:
	String^ marca;
	String^ model;
	int locuri;
	String^ culoare;
	double pret;
	int an;
	double km;
	static int counter=0;
};