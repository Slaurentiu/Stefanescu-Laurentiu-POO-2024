#include "pch.h"
#include "Cars.h"
//#include <vector>
//#include <algorithm>

using namespace System;
using namespace System::Collections::Generic;


int main(array<System::String ^> ^args)
{
    List<Car^>^ Cars = gcnew List<Car^>();                              //creare lista ce va contine obiectele create
   
    Car^ masina1 = gcnew Car(1, "Dacia", "Logan", 2020, "alb", 10000, 250000, 5);
    Cars->Add(masina1);
    Car^ masina2 = gcnew Car(2, "Opel", "Astra", 2023, "negru", 15000, 325000, 5);
    Cars->Add(masina2);
    Car^ masina3 = gcnew Car(3, "Ford", "Puma", 2015, "gri", 12000, 425000, 5);
    Cars->Add(masina3);
    Car^ masina4 = gcnew Car(4, "Renault", "Clio", 2018, "rosu", 8000, 125000, 4);
    Cars->Add(masina4);
 
    Car::afisare(Cars);                    //apelare functie afisare 
    Car::SortByPret(Cars);                 // sortare masini dupa pret
    Car::SortByMarca(Cars);                // sortare masini dupa marca

    Cars->Remove(masina1);                  // stergere masina din lista
    delete masina1;                         // apelare destructor
    Car::afisare(Cars);                      

    masina2->BackKm();
    Car::afisare(Cars);
  
    return 0;
}

