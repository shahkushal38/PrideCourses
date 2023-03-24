/*

Topics - 

1) Introduction
2) Data Types and Variables
3) Operators
4) Conditional Statements
5) Loops
6) Pointer
7) Arrays and 2D arrays, nested loop

- Strings, Structures, Union, File Handling

Arrays 
collection of items with same data type

int arr[10];

method 1 
int arr[10]={1,2,3,4,5,6,7,8,9,4};
indexing -->  0,1,2,3 ...9
printf("The value is - %d ", arr[0]); 1
arr[4] = 5
arr[9]=10
arr[13] Error
arr[-1]= 4

int arr[10];
int i;
for(i=0;i<10;i++){
	scanf("%d", &arr[i]);
}

Multidimensional arrays

int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};

int i,j;
for(i=0;i<3;i++){
	
	for(j=0;j<3;j++){
			printf("%d", matrix[i][j]);
	}
}

1 2 3
4 5 6
7 8 9

i=0
j=0 [0][0]  j =1 [0][1] j = 2 [0][2]
i=1
j=0 [1][0] j = 1 [1][1] j = 2 [1][2]
i=2
j=0 [2][0] j = 2 [2][1] j = 2 [2][2]
i=3


Q1)  
1
1 2
1 2 3
1 2 3 4

*
* *
* * *
* * * *

Q2) 

      *
	 **
	***
   ****
*/


#include<stdio.h>
#include<conio.h>

void main(){

    int matrix1[3][3];
    int matrix2[3][3];
    int ans[3][3];
    int i,j,c;
    clrscr();
    printf("\nEnter the elements of the matrix1:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
	    scanf("%d", &matrix1[i][j]);
	}
    }
    printf("\nThe matrix1 is - \n");
    for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	    printf("%d ", matrix1[i][j]);
	}
	printf("\n");
    }

    printf("\nEnter the elements of the matrix2:\n");
    for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	    scanf("%d", &matrix2[i][j]);
	}
    }
    printf("\nThe matrix2 is - \n");
    for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	    printf("%d ", matrix2[i][j]);
	}
	printf("\n");
    }

    for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	   ans[i][j]=matrix1[i][j]+matrix2[i][j];
	}
	printf("\n");
    }
    printf("\nAddition is - \n");
    for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	    printf("%d ", ans[i][j]);
	}
	printf("\n");
    }

    printf("\nMultiplication of matrix - \n");
    /*
    ans[i][j] = matrix1[i][0...2]*matrix2[0..2][j]



   ans[0][0] = matrix1[0][0]*matrix2[0][0] + matrix1[0][1]*matrix2[1][0] + matrix1[0][2]*matrix2[2][0]

   ans[0][1] = matrix1[0][0]*matrix2[0][1] + matrix1[0][1]*matrix2[1][1] + matrix1[0][2]*matrix2[2][1]

   ans[1][0] = matrix1[1][0]*matrix2[0][0] + matrix1[1][1]*matrix2[1][0] + matrix1[1][2]*matrix2[2][0]
   */


    for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	    ans[i][j]=0;
	    for(c=0;c<3;c++){
		ans[i][j]+=(matrix1[i][c]*matrix2[c][j]);
	    }
	}
    }
    for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	    printf("%d ", ans[i][j]);
	}
	printf("\n");
    }

    getch();
}