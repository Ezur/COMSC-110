//*****************
//Program Name: Lab 13-2, Dynamic Array
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Creates a C-style array of size then
//pass the area to the function by pointer
//*****************
#include <iostream>
#include <array>
using namespace std;

//constant variables
const int SIZE = 10;

//function prototypes
void enterArrayData(int*);
void outputArrayData(int*);
void sumArray(int*);

int main()
{
	//declarations
	int *pointer = new int[SIZE];	//dynamic int array

	//-----------------------------------------------

	//output section
	cout << "Enter values to create a " << SIZE << " element array!\n\n";

	//function call
	enterArrayData(pointer);
	outputArrayData(pointer);
	sumArray(pointer);

	//pointer housekeeping
	delete [] pointer;
	pointer = nullptr;

	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}

//enterArrayData(): allows user to enter data into array
//Inputs: pointer (int) | Returns: none
void enterArrayData(int *ptr)
{
	int input = 0;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter value #" << i+1 << ": ";
		cin >> input;
		*(ptr + i) = input;
	}
	cout << endl;
}

//outputArrayData(): outputs the array elements
//Inputs: pointer (int) | Returns: none
void outputArrayData(int *ptr)
{
	for (int i = 0; i < SIZE; i++)
		cout << *(ptr + i) << " ";
}

//sumArray(): outputs the sum of the array elements
//Inputs: pointer (int) | Returns: none
void sumArray(int *ptr)
{
	int sum = 0;

	for (int i = 0; i < SIZE; i++)
		sum += *(ptr + i);

	cout << "\nSum of values: " << sum << endl;
}



