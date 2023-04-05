Operators

-> printf, scanf

printf("\n The value is - %d", val);
int val;
printf("\n Enter the integer value:");
scanf("%d", &val);
-> Primitive - int, float, char


-> Operators

1) Arithmetic Operators

+, -, *,/, %(modulus) eg - 3%2 = 1  8%3 = 2

2) assignment Operators 

=, +=,-=, *=, /=  
eg  
a=10
a+=3   ->> a = a+3 = 10 +3 = 13
a*=2 -->> a = a*2 = 10 *2 = 20


3) Compairson Operator
>,<, >= , <= , ==
a=120 b=120
eg - a >= b True
a>b False  
boolean values 

4) logical Opertor

statement1 && Statement2 => 
True && True => True
t && f => f
f && T = f
f && f = f 

&& (and) , || (or) , ! (not)

True || True => T
t || f => T
f || T = T
f || f  = f 

!T = f
!F = T

eg.
a = 12
(a>5 && a%2==0) t

True and True = True

eg 
a = 4
(a>5 || a%2==0) T

5) Ternary Operators

Statement1 ? Statement2 : Statement3;

eg 
a=12
b = a>10?5:10;

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


