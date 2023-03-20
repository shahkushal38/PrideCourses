import java.io.*;
import java.lang.*;
import java.util.Scanner;
class Input{

    // 1) Scanner class
    // 2) Buffered Reader
    // 3) Arguments
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        Integer var = 3;
        int var2;
        float flt;
        String str;
        System.out.println("Enter the Value: ");
        var = sc.nextInt();

        System.out.println("Enter the Value: ");
        flt = sc.nextFloat();
    
        sc.nextLine();
        System.out.println("Enter the value:");
        str=sc.nextLine();
        
        System.out.println("Enter the Integer value:");
        var2=sc.nextInt();
        
        
        System.out.println("The value is - "+var);
        System.out.println("The value is - "+flt);

        System.out.println("The string is - "+str);
        System.out.println("The Integer is - "+var2);

        //Integer to String
        String s = Integer.toString(var);
        // String s = var.toString()
        System.out.println("The value is - "+s);

        //String to Integer
        int x = Integer.parseInt(str);
        System.out.println("The value is - "+x);
    } 
}
