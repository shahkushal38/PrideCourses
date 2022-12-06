using System.IO;
class program
{
    static void Main(String[] args)
    {

        try
        {
            string writeText = "Hello World!";  // Create a text string
            File.WriteAllText("example.txt", writeText);  // Create a file and write the content of writeText to it

            string readText = File.ReadAllText("example.txt");  // Read the contents of the file
            Console.WriteLine(readText);  // Output the content
        }
        catch(Exception e)
        {
            Console.WriteLine("The exception is  - ", e);
        }
        /*finally{
            Console.WriteLine("Finally after try catch");
        }*/

        try
        {
            Console.WriteLine("Enter the Age - ");
            int age = Convert.ToInt32(Console.ReadLine());

            if (age < 18)
            {
                throw new ArithmeticException("Access denied - You must be at least 18 years old.");
            }
            else
            {
                Console.WriteLine("Access granted - You are old enough!");
            }
        }catch(Exception e)
        {
            Console.WriteLine("The exception is  - ", e);
        }

    }
    
  }
