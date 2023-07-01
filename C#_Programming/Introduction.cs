/*
Topics - 
1) Installation
2) Data Types and Variables
3) Type Casting
4) User input


C# is pronounced "C-Sharp".

It is an object-oriented programming language created by Microsoft that runs on the .NET Framework.

C# has roots from the C family, and the language is close to other popular languages like C++ and Java.

The first version was released in year 2002. The latest version, C# 11, was released in November 2022.

C# is used for:

Mobile applications
Desktop applications
Web applications
Web services
Web sites
Games
VR


Type Casting -

Implicit Casting (automatically)
char -> int -> long -> float -> double

double myDouble = mynum;

Explicit Casting (manually) converts a larger type to smaller type
double -> float -> long -> int -> char

int myInt = (double)myDouble;

Convert.ToString
Convert.ToInt32 for Integer
Convert.ToDouble

*/

// Online C# Editor for free
// Write, Edit and Run your C# code using C# Online Compiler

using System;

public class HelloWorld
{
    public static void Main(string[] args)
    {
        int mynum = 5; //4 bytes    1byte= 8 bits
        string myText = "Hello"; //2bytes per char
        float myFloat = 5.44F; // 4 bytes
        double myDouble = 5.99D; // 8 bytes
        char myChar ='a'; //2 bytes
        
        Console.WriteLine ("Hello Mono World");
        Console.WriteLine(mynum+" "+myFloat);
        
        //dont use float for any decimal value, instead use double
        double var1 = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine(var1);
    }
}



