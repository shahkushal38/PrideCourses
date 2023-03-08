Functions -

#include<stdio.h>
#include<conio.h>

void func(){
    int i;
    int j;

    for(i=0;i<10;i++){
        for(j=10;j>i;j--){
            printf("* ");
        }
        printf("\n")
    }
}

void prime(){
    
    printf("\n Prime function called");
}

void main(){
    clrscr();
    func();
    prime();
    getch();
}