import java.util.*;
import java.io.*;
import java.lang.*;

interface First{
    public void disFirst();
}

interface Second{
    public void disSecond();
    public void disSecond(int a);
    public void disFirst(); 
}
interface Third{
    public void disThird();
}

class Interface implements First, Second, Third{

    public void disFirst(){
        System.out.println("This is the first function");
    }
    public void disThird(){
        System.out.println("This is the third function");
    }
    public void disSecond(){
        System.out.println("This is the second function");
    }

    public void disSecond(int a){
        System.out.println("This is the different second function"+ a);
    }
    
    public static void main(String[] args){
        Interface obj = new Interface();

        obj.disFirst();
        obj.disSecond(10);
        obj.disThird();
    }
}
