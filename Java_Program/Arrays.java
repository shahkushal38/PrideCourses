import java.io.*;
import java.util.*;
import java.lang.*;

class Arrays{
    
    public static void printArray(int[] arr,int n){
        int len = arr.length;
        System.out.println("Len = "+len+" n = "+n);

        System.out.println();
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }  
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        //1 dimensional array
        System.out.println("Enter the length of array - ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        // int arr[] = new int[5];
        // arr={11,2,3,4,5};

        // int[] arr={1,2,3,4,5};

        //2-D array
        // int n;
        // n=sc.nextInt();
        // int[][] mat = new int[n][n];

        //multi or n-dimensional array

        // int[][][]
        System.out.println("Enter the elements of the array - ");
        for(int i =0;i<n;i++){
            arr[i] = sc.nextInt();
        } 

        printArray(arr,n);


    }
}