/*
A template is a simple yet very powerful tool in C++. 
The simple idea is to pass data type as a parameter so that we don’t need to write the same code for different data types. 
For example, a software company may need to sort() for different data types. 
Rather than writing and maintaining multiple codes, we can write one sort() and pass data type as a parameter. 

Function Templates We write a generic function that can be used for different data types. 
Examples of function templates are sort(), max(), min(), printArray(). 

Reference - https://www.geeksforgeeks.org/templates-cpp/
*/
#include <iostream>

using namespace std;

// One function works for all data types. This would work
// even for user defined types if operator '>' is overloaded
template <typename T> T myMax(T x, T y)
{
	return (x > y) ? x : y;
}

int main()
{
	cout << myMax<int>(3, 7) << endl; // Call myMax for int
	cout << myMax<double>(3.0, 7.0) << endl; // call myMax for double
	cout << myMax<char>('g', 'e') << endl; // call myMax for char
	return 0;
}




Sorting of array 

// CPP code for bubble sort
// using template function
#include <iostream>
using namespace std;

// A template function to implement bubble sort.
// We can use this for any data type that supports
// comparison operator < and swap works for it.
template <class T> void bubbleSort(T a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = n - 1; i < j; j--)
			if (a[j] < a[j - 1])
				swap(a[j], a[j - 1]);
}

// Driver Code
int main()
{
	int a[5] = { 10, 50, 30, 40, 20 };
	int n = sizeof(a) / sizeof(a[0]);
	char ch[] = {'b', 'c' , 'a'};
	int n1 = sizeof(ch)/sizeof(ch[0]);

	// calls template function
	bubbleSort<int>(a, n);

	cout << " Sorted array : ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	
	bubbleSort<char>(ch, n1);

	cout << " Sorted char array : ";
	for (int i = 0; i < n1; i++)
		cout << ch[i] << " ";
	cout << endl;

	return 0;
}

