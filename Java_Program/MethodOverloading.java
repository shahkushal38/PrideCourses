import java.io.*;
import java.util.*;
import java.lang.*;

abstract class MyClass{
    public abstract void abb();
}
class Overloading extends MyClass{
    public void abb(){
        System.out.println("Method from abstract class");
    }
    public void dis(int num){
        System.out.println(" The value is - "+ num);
    }

    public void dis(int num, String name){
        System.out.println(" The value is - "+ num);
        System.out.println(" The value is - "+ name);
    }
}
class MethodOverloading extends Overloading{

    public void dis(int num){
        System.out.println(" This is the over - riding function value is - "+ num);
    }
    public static void main(String args[]){
        MethodOverloading obj = new MethodOverloading();
        obj.dis(1);
        obj.dis(1, "Kushal");
        obj.abb();
    }
}
