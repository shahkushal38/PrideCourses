#include<stdio.h>
#include<conio.h>
void main(){
FILE *fp;

fp=fopen("tutorial.txt","a+"); //r,w,a,r+,w+,a+
clrscr();
fprintf(fp,"This is testing for printf \n");
fputs("Welcome to pride \n",fp);
printf("\n The file");
fclose(fp);


char buff[255];
char buff2[255];
clrscr();
fp=fopen("tutorial.txt","r+");
fgets(buff,255,fp);
printf("%s\n",buff);
fgets(buff2,255,fp);
printf("% s\n",buff2);

getch();
}