//*****************
//Program Name: Program 4- File Operations with Randoms
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program functions in 2 parts.
//(1) Generates y random #s in a range then writes to external file.
//(2) Reads y random #s inside the file and outputs statistics.
//*****************
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	//declarations
	const int MAX = 25000, MIN = 10000,
			  MAXRANGE = 10000, MINRANGE = 1000;
	double count = 0, sum = 0;
	int value, even = 0, odd = 0,
		smallest, largest;
	string stringline;
	srand(time(0));
	ofstream fout;
	ifstream fin;

	//welcome instructions
	cout << "This program will: \n1) generate *many* random numbers";
	cout << "\n2) write them to an external file";
	cout << "\n3) read those numbers from that same file";
	cout << "\n4) generate and report statistics";

	//***PART ONE***//
	fout.open("output.txt");
	int y = rand() % (MAX - MIN + 1) + MIN;
	for (int i = 0; i <= y; i++)		//prints y number of times
	{
		value = rand() % (MAXRANGE - MINRANGE + 1) + MINRANGE;		//prints y in the range
		fout << value << endl;
	}
	fout.close();

	//***PART TWO***//
	fin.open("output.txt");
	if (fin)
	{
		cout << "\n\n*Successful opening file*";
		while (fin >> value)
		{
			count++;
			sum += value;
			value % 2 == 0 ? even++ : odd++;
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
	}
	else
	{
		cout << "\n\nERROR opening file!";
		return 0;
	}
	fin.close();

	//calculations & statistics
	const int W1 = 26, W2 = 15;		//setwidth parameters

	cout << "\n\n\t\t~Random Number Statistics~";
	cout << "\n\t\t--------------------------";

	cout << setw(W1) << "\nNumber of random numbers: "		//number of random items
		 << setw(W2) << right << count << endl;
	cout << setw(W1) << fixed << setprecision(0)		//sum
		 << "Sum: " << setw(W2) << right << sum << endl;
	cout << setw(W1) << "Average: " << setw(W2) << right		//average
		 << sum / count << endl;
	cout << setw(W1) << "Odds: " << setw(W2) << right		//odd
		 << odd << endl;
	cout << setw(W1 - 1) << "Odds percentage: " << setw(W2)		//% of odd
		 << right << fixed << setprecision(2)
		 << (odd / count * 100) << "%" << endl;
	cout << setw(W1) << "Evens: " << setw(W2) << right		//even
		 << even << endl;
	cout << setw(W1 - 1) << "Evens percentage: " << setw(W2)		//% of even
		 << right << fixed << setprecision(2)
		 << (even / count * 100) << "%" << endl;
	cout << setw(W1) << "Highest number: " << setw(W2)		//highest #
		 << right << largest << endl;
	cout << setw(W1) << "Lowest number: " << setw(W2)		//lowest #
		 << right << smallest << endl;

	//goodbye
	cout << "\nProgram ending.";

	//plagiarism statement
	cout << "\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}
