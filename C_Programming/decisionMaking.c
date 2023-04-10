if
if ... else 
if .. else if ... else
switch
age>18

marks>90

if(condition && condition && condition){
    //code
    

}



if(condition){
    //code

}
else{
    //code 
}

marks>90
marks>80 

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

--Question 
1) Give marks of 4 subjects English, Maths, Science, History (out of 100)
Calculate average (float)

>90 = Grade A 
>80 and <=89 = grade B 
>70 and <=79 = Grade C
>60 and <=69 = Grade D 
<60 = Grade E 

2) Given 3 numbers from the user - a,b and c. Find the largest of all

switch(a){

    case 'a':
        printf("/n The month is ");
        break;
    case 'b':
        printf()
        break;
    case 'c':
        break;
    case 'd':
        break;
    default:
        //code
        break;
}


#include<stdio.h>
#include<conio.h>

void main(){
    int month;
    clrscr();
    printf("\nEnter the month number -  ");
    scanf("%d", &month);

    switch(month){
        case 1:
            printf("\n Month is January");
            break;
        case 2:
            printf("\n Month is February");
            break;
        default:
            printf("Invalid");

    }
    getch();
}