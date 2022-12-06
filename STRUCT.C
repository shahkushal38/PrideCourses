#include<stdio.h>
#include<conio.h>

struct student{
	char name[30];
	int rollno;
};
/*function(struct student obj){

}*/
void main(){
	struct student s1;
	struct student s2;
       //function(s1);
	clrscr();
	printf("\nEnter the student 1 name:");
	scanf("%s",&s1.name);
	printf("\nEnter the student 2 name:");
	scanf("%s",&s2.name);

	printf("\nEnter the student 1 rollno:");
	scanf("%d",&s1.rollno);
	printf("\nEnter the student 2 rollno:");
	scanf("%d",&s2.rollno);

	printf("%d %d",s1.rollno,s2.rollno);
	printf("\n %s %s",s1.name, s2.name);

getch();
}
