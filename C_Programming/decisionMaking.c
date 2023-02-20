age 
if
if ... else 
if .. else if ... else
switch

if(condition && condition){
    //code

}



if(condition){
    //code

}
else{
    //code 
}


if(condition1){

}
else if(condition ){

}
else if(condition){

}

.....
else{

}


#include<stdio.h>
#include<conio.h>

void main(){
    int age;
    clrscr();
    printf("\nEnter the age -  ");
    scanf("%d", &age);

    if(age>=18){
        printf("\n Person is eligible to vote");
    }
    else{

        printf("\nPerson is ineligible");
    }
    getch();
}