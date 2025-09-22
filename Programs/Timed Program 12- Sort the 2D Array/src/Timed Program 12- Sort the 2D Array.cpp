//*****************
//Program Name: Timed Program 12, Sort the 2D Array
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: This program populates a 2D array, converts it
//to a 1D array, then uses Bubble Sort function to sort. Converts
//back to a 2D array and outputs the final, sorted array.
//*****************
#include <iostream>
#include <array>
#include <ctime>
#include <iomanip>
using namespace std;

//constant variables
const int SIZE = 30, ROWS = 3, COLS = 10,
		  MAX = 99, MIN = 10, W1 = 7;

//function prototypes
void bubbleSort(array<int, SIZE> &);
void swap(int&, int&);
void populateArray(array<array<double, COLS>, ROWS> &);

int main()
{
	srand(time(0));
	int counter = 0;
	array<int, SIZE> values = {0};
	array<array<double, COLS>, ROWS> array;

	//-----------------------------------------------

	//function call
	populateArray(array);

	//output sections & array computations
	cout << "Unsorted Array: " << endl;
	for (int r = 0; r < ROWS; r++)
	{
		for (int c = 0; c < COLS; c++)
		{
			cout << setw(W1) << array[r][c];
			values[counter++] = array[r][c];
		}
		cout << endl;
	}
	cout << endl;

	//function call
	bubbleSort(values);

	//output section
	cout << "Sorting..." << endl;

	for (int val : values)	//shows user that the program is sorting
		cout << val << " ";
	cout << endl << endl;

	//output sections & array computations
	counter = 0;
	cout << "Sorted Array: " << endl;
	for (int r = 0; r < ROWS; r++)
	{
		for (int c = 0; c < COLS; c++)
		{
			array[r][c] = values[counter++];
			cout << setw(W1) << array[r][c];
		}
		cout << endl;
	}
	cout << endl;

	return 0;
}
//bubbleSort(): Use Bubble Sort technique to sort & output values
//Inputs: array (ints) | Returns: countSwaps (int)
void bubbleSort(array<int, SIZE> &arr)
{
    for (int maxElement = SIZE - 1; maxElement > 0; maxElement--)
        for (int index = 0; index < maxElement; index++)
            if (arr[index] > arr[index + 1])
                swap(arr[index], arr[index + 1]);
}
//swap(): swaps the values of variable a & b
//Inputs: 2 variables (ints) | Returns: none
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
//populateArray(): populate array with random values between MAX & MIN
//Inputs: array (ints) | Returns: none
void populateArray(array<array<double, COLS>, ROWS> &arr)
{
	for (int r = 0; r < ROWS; r++)
		for (int c = 0; c < COLS; c++)
		{
			int randNum = rand() % (MAX - MIN + 1) + MIN;
			arr[r][c] = randNum;
		}
}
