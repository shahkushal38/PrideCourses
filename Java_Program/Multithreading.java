 import java.util.*;
import java.io.*;
import java.lang.*;

class FirstTh extends Thread{

    public void run(){
        int i;
        for(i=1;i<=10;i++){
            System.out.println("First Thread :  "+i);

            try{
                sleep(3000);
            }catch(Exception e){
                System.out.println(e);
            }
        }
    }

}

class SecondTh extends Thread{
    public void run(){
        int i;
        for(i=1;i<=10;i++){
                System.out.println("Second Thread :  "+i);

                try{
                    sleep(3000);
                }catch(Exception e){
                    System.out.println(e);
                }
            }
    }
}

class Multithreading{
    public static void main(String[] args){
        FirstTh t1 = new FirstTh();
        SecondTh t2 = new SecondTh();
        t1.start();
        t2.start();
    }
}

//References -  https://www.javatpoint.com/multithreading-in-java