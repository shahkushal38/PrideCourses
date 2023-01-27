#include<iostream.h>
#include<conio.h>
#include<string.h>
class Car {        // The class
  public:          // Access specifier
    char brand;  // Attribute
    char model;  // Attribute
    int year;      // Attribute
    Car(char x, char y, int z) { // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }

    void function1(){
      cout<<"\nInside Function";
    }
};
// Constructor definition outside the class
/*Car::Car(string x, string y, int z) {
  brand = x;
  model = y;
  year = z;
} */

void main() {
  // Create Car objects and call the constructor with different values
  Car carObj1('D', 'X', 1999);
  Car carObj2('F', 'M', 1969);
   clrscr();
  // Print values
  carObj1.function1();
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  getch();
}