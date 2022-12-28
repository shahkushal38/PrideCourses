#include<stdio.h>
#include<conio.h>
void main(){

int var1;
int var2;
int *ptr1;
int *ptr2;
int **ptr3=&ptr1;
clrscr();
	printf("\nEnter the number 1:");
	scanf("%d",&var1);
	printf("\nEnter the number 2:");
	scanf("%d",&var2);
ptr1=&var1;
ptr2=&var2;

printf("\n Pointer 1 address :%p",ptr1);
printf("\n Validate ptr1:%p",&var1);
printf("\n Value:%d",var1);
printf("\n Pointer 2 address :%p",ptr2);
printf("\n Double ptr:%p",ptr3);
printf("\n Value from pointer:%d",*ptr1);
printf("\n Value from double pointer:%p",*ptr3);

getch();
}