import java.io.*;
import java.util.*;
import java.lang.*;

class NestedLoop {

    public void looping(){
        for(int i=0;i<=20;i++){
            if(i%2!=0){
                continue;
            }
            if(i>10){
                break;
            }
            System.out.println("Value - "+ i);
        }

    }
    // i = 0, 1, 2.... 9 10 11 12
    // 0 2 4 6 8 10 

    public static void nested(){
        for(int i=0;i<=10;i++){
            // System.out.println("Value - "+ i);
            for(int j=0;j<i;j++){
                System.out.print(j+" ");
            }
            
            System.out.println();
        }

    }
}

class Largest{
    public static void nested1(){
        for(int i=0;i<=10;i++){
            // System.out.println("Value - "+ i);
            for(int j=0;j<i;j++){
                System.out.print(j+" ");
            }
            
            System.out.println();
        }

    }
    
    public static void main(String[] args){
        int a,b;
        // System.out.println("Enter the value: ");
        a = Integer.parseInt(args[0]);
        b = Integer.parseInt(args[1]);

        if(a>b){
            System.out.println("A is greatest");
        }
        else{
            System.out.println("B is greatest");
        }
        NestedLoop obj = new NestedLoop();
        obj.looping();
        obj.nested();
        nested1();
    
    }
}

