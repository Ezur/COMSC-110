//*****************
//Program Name: Lab 13-1, Rewrite for Pointers
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program that multiplies a value
//by 10 using pointers.
//*****************
#include <iostream>
#include <array>
using namespace std;

//function prototypes
int changeValues(int*, int*);

int main()
{
	//declarations
	int value1 = 0;
	int value2 = 0;

	int *pointer = nullptr;
	pointer = &value1;

	int *pointer2 = nullptr;
	pointer2 = &value2;

	//-----------------------------------------------

	//output sections
	cout << "Enter two values and I will multiply"
			" both by 10 and add them together! " << endl;
	cout << "Value 1 & 2 --> ";

	//input section
	cin >> *pointer >> *pointer2;

	//function call
	int addValues = changeValues(pointer, pointer2);
	cout << "New value --> " << addValues;

	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}
//changeValues(): multiply two values by 10 & add together
//Inputs: 2 values (ints) | Returns: sum (int)
int changeValues(int *x, int *y)
{
    int temp = *x;
    *x = (*y) * 10;
    *y = temp * 10;
    return *x + *y;
}


