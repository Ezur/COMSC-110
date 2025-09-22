//*****************
//Program Name: Lab 7-2, Min/Max with File
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program writes 100 random #a to a file
//and calculates statistics on those #s.
//*****************
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	//declarations
	ofstream fout("output.txt");
	const int MAX = 1000, MIN = 1;
	int value, count = 0;
	double largest = MIN - 1, smallest = MAX + 1,
		   sum = 0, average;
	srand(time(0));

	//welcome
	cout << "Writing 100 random numbers, in the range "
			"of 1-1000 to the file...\n";

	//loop calculations
	for (int i = 1; i <= 100; i++)
	{
		value = rand() % (MAX - MIN + 1) + MIN;
		fout << value << endl;
		if (value > largest) largest = value;
		if (value < smallest) smallest = value;
		count++;
		sum += value;
	}
	fout.close();

	//calculations
	const int W1 = 15, W2 = 10;
	average = sum / count;
	cout << setw(W1) << left << "\nLargest number: ";
	cout << setw(W2) << right << largest << endl;
	cout << setw(W1) << left << "Smallest number: ";
	cout << setw(W2-1) << right << smallest << endl;
	cout << setw(W1) << left << "Sum: "
		 << setw(W2+1) << right << sum << endl;
	cout << setw(W1) << left << "Average: " << fixed << setprecision(2)
		 << setw(W2+1) << right << average;

	//goodbye
	cout << "\n\nProgram ending.";

	//plagiarism statement
	cout << "\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}
