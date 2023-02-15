Operators

-> printf, scanf
-> Primitive - int, float, char
-> Operators

1) Arithmetic Operators

+, -, *,/, %(modulus) eg - 3%2 = 1  8%3 = 2

2) assignment Operators 

=, +=,-=, *= 
eg  
a=10
a+=3   ->> a = a+3 = 10 +3 = 13
a*=2 -->> a = a*2 = 10 *2 = 20


3) Compairson Operator
>,<. >= , <= , ==

eg - a >= b 
4) logical Opertor

&& (and) , || (or) , ! (not)

eg.
a = 11
(a>5 && a%2==0)

True and True = True

(a>5 || a%2==0)

5) Ternary Operators

Statement1 ? Statement2 : Statement3;



#include<stdio.h>
#include<conio.h>

void main(){
    int a = 10; 
    int b =12;
    int add;
    
    clrscr();
    add = a+b;

    print("\n Addition is %d", add);

    getch();
}