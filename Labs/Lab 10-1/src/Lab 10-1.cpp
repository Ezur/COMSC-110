//*****************
//Program Name: Lab 10-1, Array of Doubles
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: User enters 10 doubles. Program
//sums up the values.
//*****************
#include <iostream>
#include <array>
using namespace std;

const int SIZE = 10;

int main()
{
	//declarations
	double sum = 0;
	array<double, SIZE> values;

	//output sections & computations
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter double #" << i+1 << ": ";
		cin >> values[i];
		while (values[i] < 0 or cin.fail())
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "ERROR: Please enter a positive number: ";
			cin >> values[i];
		}
		sum += values[i];
	}
	cout << "The sum is: " << sum << " ";
	cout << endl;

	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}
