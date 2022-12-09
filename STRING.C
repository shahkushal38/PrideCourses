#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
char str[15];
char str2[20]="Welcome";
int len;
clrscr();

printf("\nEnter the string - ");

//scanf("%s",str);
gets(str);
printf("\nThe upper string - %s", strupr(str));
printf("\nThe lower string is - %s", strlwr(str));
len = strlen(str);
printf("\nThe string length is - %d",len);

if(strcmp(str,str2)==0){
	printf("\nSame value");
}
else{
printf("\n Not same");
}
printf("\nConcat string  - %s", strcat(str,str2));
strcpy(str,str2);
printf("\nString - %s",str);

getch();
}
