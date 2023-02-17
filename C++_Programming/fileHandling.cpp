#include <iostream.h>
#include<conio.h>
#include <fstream.h>
#include <string.h>
//using namespace std;

void main () {
  
  // Create a text file
  ofstream MyWriteFile("filename.txt");

  // Write to the file
  MyWriteFile << "Files can be Tricky";

  // Close the file
  MyWriteFile.close();
  
  // Create a text string, which is used to output the text file
  char myText[255];

  // Read from the text file
  ifstream MyReadFile;
  clrscr();
  MyReadFile.open("filename.txt");
  /*
  // Use a while loop together with the getline() function to read the file line by line
  while (cin.getline (MyReadFile, myText,255)) {
    // Output the text from the file
    cout << myText;
  }*/
  
  
  /*
  MyReadFile>>myText;

  cout<<myText<<endl;
  MyReadFile>>myText;

  cout<<myText<<endl;
  */

 while(!MyReadFile.eof()){
	MyReadFile>>myText;
	cout<<myText<<" " ;
  }
  // Close the file
  MyReadFile.close();

  getch();
}
