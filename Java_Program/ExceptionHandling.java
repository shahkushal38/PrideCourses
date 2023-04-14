// Try -- catch block
// throw -- 
// Finally

// Exception- 
// 1) Arithmetic Expension
// 2) ArrayOutOfBound Exception
// 3) FileNotFound Exception

import java.util.*;
import java.io.*;
import java.lang.*;

class ExceptionHandling {
    public static void main(String args[]){
        try{
            Scanner sc = new Scanner(System.in);
            int a;
            int b;
            System.out.println("Enter value of a: ");
            a = sc.nextInt();
            System.out.println("Enter value of b: ");
            b = sc.nextInt();
            if(b==0){
                throw new Exception("Division by zero not possible");
            }
            int c  = a/b;
            System.out.println("The ans - "+ c);

        }catch(Exception e){
            System.out.println("The exception has occurred "+e);
        }

        finally{
            System.out.println("Finally block");
        }

    }
}