/*

Loops in C programming 
-> for loop
-> while loop
-> do...while loop

initialisation, condition, increment/decrement

int i;
for(initialisation; condition;increment/derement){
    code
    code
}

eg = 
int i;
for(i=0;i<10; i= i*2){
    print("%d", i); 
}

i = 0
i = 1
i = 2 ...3 4 5 6 7 8 9 10

i=0, -1, -2 -3 ..........

int i=0;
while(condition){
    code
    code
    increment/decrement
}

initialisation
do{
    code
    code
    increment/decrement
}while(condition);

*/


#include<stdio.h>
#include<conio.h>

void main(){
    int i;
    clrscr();
    for(i=0;i<10;i++){
        //0 to 10
        printf("\n%d * 5 = %d", i, i*5); 
    }
    
    printf("\n Out of loop i = %d",i);

    i=1;
    while(i<10){
	printf("\n In while loop %d * 5 = %d",i,i*5);
	i=i*2;
    }
    getch();
}

int i;
int j;

for(i=0;i<10;i++){
    for(j=0;j<i;j++){
        printf("* ");
    }
    printf("\n")
}

i = 0 .... 9

0 j = 0 ...<0

1 j = 0 ....< 1
*
2 j = 0 ...< 2
* *
3 j = 0 ...< 3
* * * 

* *
* * *
* * * *

* * * *
* * *
* *
*