//*****************
//Program Name: Lab 7-4, Statistics with Files
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program calculates statistics
//for an unknown # of integers in a file.
//*****************
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	//declarations
	ifstream fin("randoms.txt");
	double count = 0, sum = 0;
	int value, largest, smallest;
	const int W1 = 17, W2 = 13;

	//loop calculations
	if (fin)
	{
		while (fin >> value)
		{
			count++;
			sum += value;
			if (count == 1)
				{
					smallest = value;
					largest = value;
				}
				else
				{
					if (value > largest)
						largest = value;
					if (value < smallest)
						smallest = value;
				}
		}
		//output section
		cout << setw(W1) << left << "Number of items: ";
		cout << setw(W2) << right << count;
		cout << setw(W1) << left << "\nTotal: ";
		cout << setw(W2+1) << right << sum;
		cout << setw(W1) << left << "\nAverage: " << fixed
			 << setprecision(2) << setw(W2+1) << right << sum/count;
		cout << setw(W1) << left << "\nLargest number: ";
		cout << setw(W2+1) << right << largest;
		cout << setw(W1) << left << "\nSmallest number: ";
		cout << setw(W2) << right << smallest;
	}
	else
		cout << "Input file error!";
	fin.close();

	//goodbye
	cout << "\n\nProgram ending.";

	//plagiarism statement
	cout << "\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}
