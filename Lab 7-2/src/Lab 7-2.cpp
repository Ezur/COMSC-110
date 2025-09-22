//*****************
//Program Name: Lab 7-2, Average with File
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program reads 6 integers from a file and
//outputs statistics.
//*****************
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	//declarations
	ifstream fin("data.txt");
	int value, count = 0;
	double sum = 0, average;

	//welcome
	cout << "Reading from file...your numbers are: \n";

	//loop calculations
	for (int i = 1; i <= 6; i++)
	{
		fin >> value;
		cout << value << " ";
		count++;	//keeps track of # of variables
		sum += value;
	}
	fin.close();

	//calculations
	average = sum / count;
	cout << "\nThe average of these numbers is: "
		 << fixed << setprecision(2) << average;

	//goodbye
	cout << "\n\nProgram ending.";

	//plagiarism statement
	cout << "\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}
