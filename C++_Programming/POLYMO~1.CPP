/*
Polymorphism - "Poly" = many  "phorms" = methods
method overloading and method overriding
*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
class Parent {
  public:
    void function1(){
      cout<<"\n Inside function 1 of Parent";
    }

};

// Derived class
class Child: public Parent{
  public:
    void function1(){
      cout<<"\n Inside function of child";
    }
};


class GrandChild: public Child{
  public:
    void function1(){
      cout<<"\n Inside function of Grand child";
    }
};

void main() {
  Parent p;
  Child c;
  GrandChild g;
  clrscr();
  p.function1();
  c.function1();
  g.function1();

  getch();
}