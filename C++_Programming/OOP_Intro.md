## C++ What is OOP?

OOP stands for Object-Oriented Programming.

Procedural programming is about writing procedures or functions that perform operations on the data, while object-oriented programming is about creating objects that contain both data and functions.

Code Example -- 

```
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

int main() {
  MyClass myObj;  // Create an object of MyClass
  MyClass myObj2;

  // Access attributes and set values
  myObj.myNum = 15; 
  myObj.myString = "Some text";

  myObj2.myNum = 10;
  myObj2.myString = "some string 2";
  // Print attribute values
  cout << myObj.myNum << "\n";
  cout << myObj.myString;
  
  return 0;
}

``` 