//*****************
//Program Name: Lab 11-1, 10x10 Vector Grid
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program pushes 100 random numbers (0-999)
//into an empty int vector. Function outputs 10x10 grid of all numbers.
//*****************
#include <iostream>
#include <vector>
#include <ctime>
#include <iomanip>
using namespace std;

//constants
const int MIN = 0, MAX = 999,
		  WIDTH = 7;

//function prototype
void printGrid(vector<int>);

int main()
{
	//declarations
	srand(time(0));
	int number = 0;
	vector<int> values;

	//random # computations
	for (int i = 0; i < 100; i++)
	{
		number = rand() % (MAX - MIN + 1) + MIN;
		values.push_back(number);
	}

	//output sections & function call
	cout << "10x10 Vector Grid\n";
	printGrid(values);

	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}

//printGrid(): Prints the vector's contents in 10x10 grid
//Inputs: vector (ints) | Returns: none
void printGrid(vector<int> v)
{
	for (int i = 0; i < 100; i++)
	{
		if (i % 10 == 0) cout << endl;
			cout << setw(WIDTH) << v[i];
	}
}

