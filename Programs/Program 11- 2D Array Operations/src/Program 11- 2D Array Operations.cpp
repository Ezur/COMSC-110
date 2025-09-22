//*****************
//Program Name: Program 11, 2D Array Operations
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program will take two 2D arrays and
//"add" them together. Program will calculate various
//statistics based on 2D array elements.
//*****************
#include <iostream>
#include <array>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

//constants
const int COLS = 10, ROWS = 10,
		  MIN = 1, MAX = 1000,
		  W1 = 10, W2 = 16, W3 = 8;

//function prototype
void populateArray(array<array<int, COLS>, ROWS> &);

void addArrays(array<array<int, COLS>, ROWS>,
			   array<array<int, COLS>, ROWS>,
			   array<array<int, COLS>, ROWS> &);

void printArray(array<array<int, COLS>, ROWS>);

int get_max(array<array<int, COLS>, ROWS>);

int get_min(array<array<int, COLS>, ROWS>);

int get_sum(array<array<int, COLS>, ROWS>);

void print_row_sums(array<array<int, COLS>, ROWS>);

void print_column_sums(array<array<int, COLS>, ROWS>);

int main()
{
	//declarations
	srand(time(0));
	int minVal = 0, maxVal = 0, sum = 0;
	array<array<int, COLS>, ROWS> array1;
	array<array<int, COLS>, ROWS> array2;
	array<array<int, COLS>, ROWS> array3;

	populateArray(array1);
	populateArray(array2);

	for (int r = 0; r < ROWS; r++)		//populate array3
		for (int c = 0; c < COLS; c++)
			array3[r][c] = (0);

	addArrays(array1, array2, array3);

	//output sections: arrays 1-3
	cout << "Array1: " << endl;
	printArray(array1);

	cout << "Array2: " << endl;
	printArray(array2);

	cout << "Array3, the matrix sum of Array1 & Array2: " << endl;
	printArray(array3);

	//ARRAY1
	maxVal = get_max(array1);
	minVal = get_min(array1);
	sum = get_sum(array1);

	//output sections
	cout << "\n/* ARRAY 1 ANALYSIS: */" << endl;
	cout << setw(W2) << right << "Max value: "
		 << setw(W3) << right << maxVal << endl;
	cout << setw(W2) << right << "Min value: "
		 << setw(W3) << right << minVal << endl;
	cout << setw(W2-6) << right << "Sum: "
		 << setw(W3+6) << right << sum << endl;
	cout << setw(W2-2) << right << "Average: "
		 << fixed << setprecision(2) << setw(W3+2) << right
		 << ((double) sum / array1.size()) << endl;

	print_row_sums(array1);
	print_column_sums(array1);

	//ARRAY2
	maxVal = get_max(array2);
	minVal = get_min(array2);
	sum = get_sum(array2);

	//output sections
	cout << "\n/* ARRAY 2 ANALYSIS: */" << endl;
	cout << setw(W2) << right << "Max value: "
		 << setw(W3) << right << maxVal << endl;
	cout << setw(W2) << right << "Min value: "
		 << setw(W3) << right << minVal << endl;
	cout << setw(W2-6) << right << "Sum: "
		 << setw(W3+6) << right << sum << endl;
	cout << setw(W2-2) << right << "Average: "
		 << fixed << setprecision(2) << setw(W3+2) << right
		 << ((double) sum / array1.size()) << endl;

	print_row_sums(array2);
	print_column_sums(array2);

	//ARRAY3
	maxVal = get_max(array3);
	minVal = get_min(array3);
	sum = get_sum(array3);

	//output sections
	cout << "\n/* ARRAY 3 ANALYSIS: */" << endl;
	cout << setw(W2) << right << "Max value: "
		 << setw(W3) << right << maxVal << endl;
	cout << setw(W2) << right << "Min value: "
		 << setw(W3) << right << minVal << endl;
	cout << setw(W2-6) << right << "Sum: "
		 << setw(W3+6) << right << sum << endl;
	cout << setw(W2-2) << right << "Average: "
		 << fixed << setprecision(2) << setw(W3+2) << right
		 << ((double) sum / array1.size()) << endl;

	print_row_sums(array3);
	print_column_sums(array3);

	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}

//populateArray(): Populate array with random values
//Inputs: 2-D Array(ints) | Returns: none
void populateArray(array<array<int, COLS>, ROWS> &arr)
{
	for (int r = 0; r < ROWS; r++)
		for (int c = 0; c < COLS; c++)
			arr[r][c] = rand() % (MAX - MIN + 1) + MIN;
}

//addArrays(): Adds together array1 & array2 and assigns value to array3
//Inputs: Three 2-D Arrays(ints) | Returns: none
void addArrays(array<array<int, COLS>, ROWS> arr1,
			   array<array<int, COLS>, ROWS> arr2,
			   array<array<int, COLS>, ROWS> &arr3)
{
	int sum = 0;

	for (int r = 0; r < ROWS; r++)
		for (int c = 0; c < COLS; c++)
		{
			sum = arr1[r][c] + arr2[r][c];
			arr3[r][c] = sum;
		}
}

//printArray(): Prints array
//Inputs: 2-D Array(ints) | Returns: none
void printArray(array<array<int, COLS>, ROWS> arr)
{

	for (int r = 0; r < ROWS; r++)
	{
		for (int c = 0; c < COLS; c++)
			cout << setw(W1) << arr[r][c];
		cout << endl;
	}
	cout << endl;
}

//get_max(): Returns the max value of all elements in the 2d array
//Inputs: 2-D Array(ints) | Returns: max value (int)
int get_max(array<array<int, COLS>, ROWS> arr)
{
	int max = 0;
	for (int r = 0; r < ROWS; r++)
		for (int c = 0; c < COLS; c++)
		{
			if (r == 0 and c == 0)
				max = arr[r][c];
			else
				if (arr[r][c] > max) max = arr[r][c];
		}
	return max;
}

//get_min(): Returns the min value of all elements in the 2d array
//Inputs: 2-D Array(ints) | Returns: min value (int)
int get_min(array<array<int, COLS>, ROWS> arr)
{
	int min = 0;
	for (int r = 0; r < ROWS; r++)
		for (int c = 0; c < COLS; c++)
		{
			if (r == 0 and c == 0)
				min = arr[r][c];
			else
				if (arr[r][c] < min) min = arr[r][c];
		}
	return min;
}

//get_sum(): Returns the total of all elements in the 2d array
//Inputs: 2-D Array(ints) | Returns: sum of all values (int)
int get_sum(array<array<int, COLS>, ROWS> arr)
{
	int sum = 0;
	for (int r = 0; r < ROWS; r++)
		for (int c = 0; c < COLS; c++)
			sum += arr[r][c];
	return sum;
}

//print_row_sums(): Traverse the 2-D array, calculate &
//display each row's sum
//Inputs: 2-D Array(ints) | Returns: none
void print_row_sums(array<array<int, COLS>, ROWS> arr)
{
	int rowSum = 0;

	cout << setw(W2+1) << right << "Sum of rows:" << endl;
	for (int r = 0; r < ROWS; r++)
	{
		rowSum = 0;
		for(int c = 0; c < COLS; c++)
			rowSum += arr[r][c];
		cout << "\tRow [" << r << "] sum: ";
		cout << rowSum << endl;
	}
}

//print_column_sums(): Traverse the 2-D array, calculate &
//display each column's sum
//Inputs: 2-D Array(ints) | Returns: none
void print_column_sums(array<array<int, COLS>, ROWS> arr)
{
	int columnSum = 0;

	cout << setw(W2+6) << right << "Sum of columns: \n";
	for (int c = 0; c < COLS; c++)
	{
		columnSum = 0;
		for(int r = 0; r < ROWS; r++)
			columnSum += arr[r][c];
		cout << "\tCol [" << c << "] sum: ";
		cout << columnSum << endl;
	}
}
