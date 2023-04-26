// Bytes  - input and output characters of file
// Input - FileInputStream  (read)
// Output - FileOutputStream (write/append)

import java.io.*;
class ByteWrite{

    public static void readFile(){
        FileInputStream in = null;
        int b;

        try{
            in = new FileInputStream("sample.txt");
            b = in.read();

            while(b != -1 ){
                System.out.print((char)b);
                b=in.read();
            }
            in.close();
        }catch(Exception e){
            System.out.println("Exception occurred"+e);
        }
    }
    public static void writeFile(){
        FileOutputStream out=null;

        try{
            byte a[]={'P', 'r','i','d','e'};
            // String str = "Welcome to learn Java";
            out = new FileOutputStream("sample.txt");
            out.write(a);
            // out.write(str);
            out.close();
        }catch(Exception e){
            System.out.println("Exception occurred"+e);
        }
    }
    public static void main(String[] args){
        ByteWrite obj = new ByteWrite();
        // obj.writeFile();
        obj.readFile();
    }
}