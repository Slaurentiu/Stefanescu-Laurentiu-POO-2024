#pragma once

using namespace System;
using namespace System::Collections::Generic;

ref class Car 
{
public:
	Car(int, String^ , String^ , int , String^ , double, double, int );			//constructor
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
	int GetId();
	static int GetCounter();
	static void afis(List<Car^>^ Lista);
	
private:
	int Id;
	String^ marca;
	String^ model;
	int locuri;
	String^ culoare;
	double pret;
	int an;
	double km;
	static int counter=0;
};