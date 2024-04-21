#include "pch.h"
#include "Cars.h"
#include <vector>
#include <algorithm>

using namespace System;
using namespace System::Collections::Generic;

static void afisare(List<Car^>^ Lista)
{
    Console::WriteLine();
    Console::WriteLine("Marca  Model  An  Culoare  Pret(E)  Km   Locuri ");
    Console::WriteLine("================================================");
    for each (Car ^ car in Lista)
    {
        Console::WriteLine(car->GetMarca() +"\t"+ car->GetModel()+"\t"+car->GetAn()+"\t" + car->GetCuloare()+"\t"+car->GetPret()+ "\t" + car->GetKm() + "\t"+car->GetLocuri());
    }
    Console::WriteLine("Avem " + Car::GetCounter() + " masini");
}
 
//int CompareByPret(Car^ a, Car^ b)
//{
//   return (a->GetPret() <= b->GetPret()) ? -1 : 1;
//
//}
//void SortByPret(List<Car^>^ Cars)
//{
 //   Cars->Sort(gcnew Comparison<Car^>(CompareByPret));
  //  Console::WriteLine();
  //  Console::WriteLine("Lista masini ordonate dupa pret:");
   // Console::WriteLine("Marca  Model   An    Culoare    Pret(E)  Km   Locuri ");
    //Console::WriteLine("=================================================");
    //for each (Car^ car in Cars)
    //{
    //    Console::WriteLine(car->GetMarca() + "\t" + car->GetModel() + "\t" + car->GetAn() + "\t" + car->GetCuloare() + "\t" + car->GetPret() + "\t" + car->GetKm()+"\t"+car->GetLocuri());
    //}
    //Console::WriteLine("Avem " + Car::GetCounter() + " masini");
//}

int main(array<System::String ^> ^args)
{
    List<Car^>^ Cars = gcnew List<Car^>();                              //creare lista ce va contine instantele create
    //Console::WriteLine("Creare masina noua");
    Car^ masina1 = gcnew Car(1, "Dacia", "Logan", 2020, "alb", 10000, 250000, 5);
    Cars->Add(masina1);
    Car^ masina2 = gcnew Car(2, "Opel", "Astra", 2023, "negru", 15000, 325000, 5);
    Cars->Add(masina2);
    Car^ masina3 = gcnew Car(3, "Ford", "Puma", 2015, "gri", 12000, 425000, 5);
    Cars->Add(masina3);
    Car^ masina4 = gcnew Car(4, "Renault", "Clio", 2018, "rosu", 8000, 125000, 4);
    Cars->Add(masina4);
 
    Car::afis(Cars);                         //apelare functie afisare  
    Car::SortByPret(Cars);                   // sortare masini dupa pret

    Cars->Remove(masina1);
    delete masina1;
    Car::afis(Cars);                      

    masina2->BackKm();
    afisare(Cars);
  
    return 0;
}

