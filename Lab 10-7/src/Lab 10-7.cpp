//*****************
//Program Name: Lab 10-7, Compare Arrays
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program outputs three arrays then compares them
//and displays the results.
//*****************
#include <iostream>
#include <fstream>
#include <array>
using namespace std;

const int SIZE = 5;

bool compareArrays(array<int, SIZE> &, array<int, SIZE> &);

int main()
{
	//declarations
	bool status;
	array<int, SIZE> array1 = {2, 4, 6, 8, 10};
	array<int, SIZE> array2 = {1, 3, 5, 7, 9};
	array<int, SIZE> array3 = {2, 4, 6, 8, 10};

	//array1 output
	cout << "Array1: ";
	for (int i = 0; i < SIZE; i++)
		cout << array1[i] << " ";
	cout << endl;

	//array2 output
	cout << "Array2: ";
	for (int i = 0; i < SIZE; i++)
		cout << array2[i] << " ";
	cout << endl;

	//array3 output
	cout << "Array3: ";
	for (int i = 0; i < SIZE; i++)
		cout << array3[i] << " ";
	cout << endl << endl;

	//comparison output
	status = compareArrays(array1, array2);
	cout << "Comparing array1 and array2: ";
	(status == true) ? cout << "same\n" : cout << "different\n";

	//comparison output
	status = compareArrays(array1, array3);
	cout << "Comparing array1 and array3: ";
	(status == true) ? cout << "same\n" : cout << "different\n";

	//comparison output
	status = compareArrays(array2, array3);
	cout << "Comparing array2 and array3: ";
	(status == true) ? cout << "same\n" : cout << "different\n";

	//plagiarism statement
	cout << "\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}

bool compareArrays(array<int, SIZE> &arr, array<int, SIZE> &arr2)
{
	bool status = true;
	for (int i = 0; i < arr[i]; i++)
		if (arr != arr2)
		{
			status = false;
			break;
		}
	return status;
}
