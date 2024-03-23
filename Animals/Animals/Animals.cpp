#include "pch.h"

using namespace System;

ref class Animal 
{
public:
    int legs;
    void setName(String^ nm)
    {
        name = nm;
    }
    String^ getName()
    {
        return name;
    }


private:
    String^ name;
};



int main(array<System::String ^> ^args)
{
    Animal cat, dog;
    cat.setName("Cat");
    cat.legs = 4;
    dog.setName("Dog");
    dog.legs = 4;

    Console::WriteLine("Animal 1");
    Console::WriteLine("Name:  ");
    Console::WriteLine(cat.getName());
    Console::WriteLine("Legs:  ");
    Console::WriteLine(cat.legs);
    Console::WriteLine();
    Console::WriteLine("Animal 2");
    Console::WriteLine("Name:  ");
    Console::WriteLine(dog.getName());
    Console::WriteLine("Legs:  ");
    Console::WriteLine(dog.legs);
    Console::WriteLine();


    return 0;
}
