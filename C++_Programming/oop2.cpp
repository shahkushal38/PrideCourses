/*
OOP - classes, objects,
*/

#include<iostream.h>
#include<conio.h>
class Pride {        // The class
  public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
      cout << "Hello World!";
    }
    void myMethod1();
};

void Pride::myMethod1() {
  cout << "\nWelcome!";
} 
void main() {
  Pride myObj;     // Create an object of MyClass
  clrscr();
  myObj.myMethod();  // Call the method
  myObj.myMethod1();
  getch();
}