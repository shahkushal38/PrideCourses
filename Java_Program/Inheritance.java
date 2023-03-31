import java.io.*;
import java.util.*;
import java.lang.*;


class Animal{  
void eat(){System.out.println("eating...");}  
}  
class Dog extends Animal{  
void bark(){System.out.println("barking...");}  
}  
class BabyDog extends Dog{  
void weep(){System.out.println("weeping...");}  
}  
class TestInheritance2{  
public static void main(String args[]){  
BabyDog d=new BabyDog();  
d.weep();  
d.bark();  
d.eat();  
}

}  


1) Inheritance in Java is a mechanism in which one object acquires all the properties and behaviors of a parent object. 
It is an important part of OOPs (Object Oriented programming system).

2) The idea behind inheritance in Java is that you can create new classes that are built upon existing classes. 
When you inherit from an existing class, you can reuse methods and fields of the parent class. 
Moreover, you can add new methods and fields in your current class also.

3) Inheritance represents the IS-A relationship which is also known as a parent-child relationship.
______________________________________________________________________________
Why use inheritance in java?

For Method Overriding (so runtime polymorphism can be achieved).

For Code Reusability.
_________________________________________________________________________
Types of Inheritance - Single, multilevel, Hybrid, multiple Inheritance, 
Hierarchial (When a single class, is inherited by two or more classes)
_________________________________________________________________________
Why multiple inheritance is not supported in java?
To reduce the complexity and simplify the language, multiple inheritance is not supported in java.

Consider a scenario where A, B, and C are three classes. The C class inherits A and B classes. 
If A and B classes have the same method and you call it from child class object, there will be ambiguity to 
call the method of A or B class.

Since compile-time errors are better than runtime errors, Java renders compile-time error if you inherit 2 classes. 
So whether you have same method or different, there will be compile time error.

_________________________________________________________________________


