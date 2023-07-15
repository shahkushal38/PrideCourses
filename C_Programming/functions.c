Functions -

->  simple block of code

no return no parameters/arguments
no return and with parameters
return and no parameters
return and parameters


void = null, no return value

specifier
void/int/char/float function_name(){
    return {void/int/char/float}
}
no return no arguments


#include<stdio.h>
#include<conio.h>

void func(int num){
    int i;
    int j;

    for(i=0;i<num;i++){
        for(j=num;j>i;j--){
            printf("* ");
        }
        printf("\n")
    }
}

void prime(){
    
    printf("\n Prime function called");
}

// return and arguments
int addition(int a, int b){
    int ans = a+b;
    return ans;

}
void main(){
    clrscr();
    func(10);
    prime();
    int a = 10;
    int sum =addition(a, 20);
    printf("Sum - %d",  sum);
    getch();
}