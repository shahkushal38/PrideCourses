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
for(i=0;i<10; i++){
    print("%d", i); 
}

i = 0
i = 1
i = 2 ...3 4 5 6 7 8 9 10

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
        printf("\n%d * 5 = %d", i, i*5);
    }
    printf("\n Out of loop i = %d",i);

    i=0;
    while(i<10){
	printf("\n In while loop %d * 5 = %d",i,i*5);
	i=i*2;
    }
    getch();
}