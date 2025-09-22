//*****************
//Program Name: Lab 10-5, Double the Array
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program will manipulate an array that will
//be sent to a function as an argument.
//*****************
#include <iostream>
#include <array>
using namespace std;

const int SIZE = 10;

//function prototype
void doubleElements(array<int, SIZE> &);

int main()
{
	//declaration
	array<int, SIZE> numbers = {14, 62, 87, 18, 43,
							   86, 27, 31, 50, 63};

	//output section
	cout << "Original array: ";
	for (int val : numbers)
		cout << val << " ";
	cout << endl;

	//function call
	doubleElements(numbers);

	//output section
	cout << "Doubled array: ";
	for (int val : numbers)
		cout << val << " ";

	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}

void doubleElements(array<int, SIZE> &arr)
{
	for (int i = 0; i < SIZE; i++)
		arr[i] *= 2;
	cout << endl;

}
