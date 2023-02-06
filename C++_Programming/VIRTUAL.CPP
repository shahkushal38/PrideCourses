#include<iostream.h>
#include<conio.h>

class Base {
public:
    virtual void print()
    {
	cout << "print base class\n";
    }

    void show()
    {
	cout << "show base class\n";
    }
};

class Derived : public Base {
public:
    void print()
    {
	cout << "print derived class\n";
    }
    void show()
    {
	cout << "show derived class\n";
    }
};

void main()
{
    //Derived obj;
    clrscr();
    //obj.print();
    Base *bptr;
    Derived d;
    bptr = &d;

    // Virtual function, binded at runtime
    bptr->print();

    // Non-virtual function, binded at compile time
    bptr->show();

    getch();
}