//*****************
//Program Name: Lab 12
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: This program lists the week and corresponding
//milk price from 1978.
//*****************
#include <iostream>
#include <fstream>
#include <array>
#include <iomanip>
using namespace std;

//constant variables
const int SIZE = 52, W1 = 10, W2 = 11;

//function prototypes
void bubbleSort(array<double, SIZE> &, array<int, SIZE> &);
void swap(double &, int &);

int main()
{
	//declarations
	ifstream fin ("milk.txt");
	int i = 0;
	array<double, SIZE> prices = {0};
	array<int, SIZE> weeks = {0};

	//file computations
	while (fin >> prices[i++]);		//read file into array
	fin.close();

	//-----------------------------------------------

	//populate array section
	for (int i = 0; i < SIZE; i++)
		weeks[i] = i + 1;	//populate weeks array

	//function call
	bubbleSort(prices, weeks);

	//output sections
	cout << "*** 1978 milk prices (sorted low -> high) ***" << endl;
	cout << "Week" << setw(W1) << "Price" << endl;
	cout << "----" << setw(W1) << "-----" << endl;

	//output array section
	for (int i = 0; i < SIZE; i++)
		cout << setw(W1/3) << weeks[i]
			 << setw(W2) << prices[i] << endl; //output arrays

	cout << "\nLowest price: $" << prices[0]
		 << " in week " << weeks[0] << endl;
	cout << "Highest price: $" << prices[51]
		 << " in week " << weeks[51];

	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}
//bubbleSort(): uses Bubble Sort function, sort values low to high
//Inputs: 2 arrays (doubles, ints) | Returns: none
void bubbleSort(array<double, SIZE> &arr, array<int, SIZE> &arr2)
{
	for (int maxElement = SIZE - 1; maxElement > 0; maxElement--)
		for (int index = 0; index < maxElement; index++)
			if (arr[index] > arr[index + 1])
			{
				swap(arr[index], arr[index + 1]);
				swap(arr2[index], arr2[index + 1]);
			}
}
//swap(): exchange the value between variable a & b
//Inputs: 2 variables (ints) | Returns: none
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

