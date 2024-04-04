#include "pch.h"
#include "Person.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    
    Person^ pers1;
    pers1 = gcnew Person("1750812170385");
    pers1->SetName("Ionescu");
    pers1->SetSurname("Marian");
    pers1->SetAddress("Iasi, str. Romana nr. 15");
    pers1->SetAge(39);
    pers1->SetSex(0);
    int gen1 = static_cast<int>(pers1->GetSex());

    Person^ pers2;
    pers2 = gcnew Person("2901025240557");
    pers2->SetName("Popescu");
    pers2->SetSurname("Florina");
    pers2->SetAddress("Bacau, str. Lunga nr. 5");
    pers2->SetAge(34);
    pers2->SetSex(1);
    int gen2 = static_cast<int>(pers2->GetSex());

    Person^ pers3;
    pers3 = gcnew Person("1990501220845");
    pers3->SetName("Manole");
    pers3->SetSurname("Sandu");
    pers3->SetAddress("Suceava, str. Noua nr. 1");
    pers3->SetAge(25);
    pers3->SetSex(0);
    int gen3 = static_cast<int>(pers3->GetSex());

 
    Console::WriteLine("Lista de persoane inregistrate:");
    Console::WriteLine("Nume/prenume: " + pers1->GetName() + " " + pers1->GetSurname() + ", " + "CNP: " + pers1->GetCnp()+", "+ "Sex(0-M/1-F): "+ gen1);
    Console::WriteLine("Adresa: " + pers1->GetAddress());
    Console::WriteLine("Nume/prenume: " + pers2->GetName() + " " + pers2->GetSurname() + ", " + "CNP: " + pers2->GetCnp() + ", " + "Sex(0-M/1-F): " + gen2);
    Console::WriteLine("Adresa: " + pers2->GetAddress());
    Console::WriteLine("Nume/prenume: " + pers3->GetName() + " " + pers3->GetSurname() + ", " + "CNP: " + pers3->GetCnp() + ", " + "Sex(0-M/1-F): " + gen3);
    Console::WriteLine("Adresa: " + pers3->GetAddress());
    Console::WriteLine("Total persoane: " + Person::GetCount());
    return 0;
}
