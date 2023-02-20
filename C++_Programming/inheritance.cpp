/*
Inheritance and Polymorphism
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
    void function2(){
      cout<<"\n Inside function of child";
    }
};


class GrandChild: public Child{
  public:
    void function3(){
      cout<<"\n Inside function of Grand child";
    }
};

void main() {
  Parent p;
  Child c;
  GrandChild g;
  clrscr();
  g.function1();
  g.function2();
  g.function3();

  getch();
}