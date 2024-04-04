#include "pch.h"
using namespace System;

ref class Book
{
public:
    Book();
    ~Book();
    static Book();
    void SetTitle(String^ titlu)
    {
        title = titlu;
    }

    String^ GetTitle()
    {
        return title;
    }

    void SetAuthor(String^ autor)
    {
        author = autor;
    }

    String^ GetAuthor()
    {
        return author;
    }

    void SetIsbn(String^ nr)
    {
        Isbn = nr;
    }

    String^ GetIsbn()
    {
        return Isbn;
    }
    void SetPages(int pag)
    {
        pages = pag;
    }
    int GetPages()
    {
        return pages;
    }
    void SetYear(int an)
    {
        year = an;
    }
    int GetYear()
    {
        return year;
    }
    static int GetCount()
    {
        return count;
    }

private:
    static int count = 0;;
    String^ title;
    String^ author;
    String^ Isbn;
    int pages,year;
};

Book::Book()
{
    Book::count++;
}
Book::~Book()
{
    Book::count--;
}

static Book::Book()
{
    Book::count = 0;
}

int main(array<System::String ^> ^args)
{
    Book carte1;
    carte1.SetTitle("Cartile junglei");
    carte1.SetAuthor("Rudyard Kipling");
    carte1.SetYear(1890);
    carte1.SetIsbn("38754879512");
    carte1.SetPages(300);

    Book carte2;
    carte2.SetTitle("Numele trandafirului");
    carte2.SetAuthor("Umberto Eco");
    carte2.SetYear(1915);
    carte2.SetIsbn("3875484572");
    carte2.SetPages(500);

    Console::WriteLine("Carti inregistrate: ");
    Console::WriteLine("Titlu carte: " + carte1.GetTitle() + ". Autor: " + carte1.GetAuthor() + ". Pagini: " + carte1.GetPages() + ". ISBN: " + carte1.GetIsbn());
    Console::WriteLine("Titlu carte: " + carte2.GetTitle() + ". Autor: " + carte2.GetAuthor() + ". Pagini: " + carte2.GetPages() + ". ISBN: " + carte2.GetIsbn());
    Console::WriteLine("Total: " + Book::GetCount()+" carti.");
 

    return 0;
}
