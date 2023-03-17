import java.io.*;
import java.lang.*;


class Intro1{

    public static void main(String args[]){

        
        Solution obj = new Solution();
        System.out.println("Welcome to Pride");
        int var = 1; //4 bytes
        float flt = 4.13f; //4 bytes
        double db = 4.2555d; //8 bytes
        long ln= 234; //8 bytes
        boolean b = true; //1 bytes
        String str = "This is a string"; //depending on number of characters
        

        System.out.println("Hello World");
        System.out.println("My name is Kushal");
        obj.method();
        System.out.println("var - "+ var+ " float"+ flt);
    }
}

class Solution{
    public void method(){
        System.out.println("this is method");
    }
}


