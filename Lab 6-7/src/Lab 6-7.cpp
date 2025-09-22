//*****************
//Program Name: Lab 6-7, Help the Teacher
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program calculates the # of tests
//and their average. Uses a sentinel to end program.
//*****************
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declarations
	float score, sum = 0.0, average;
	int tests = 0;

	//output & input sections
	cout << "Enter grade, -99 to quit: ";
	cin >> score;

	while (score != -99)
	{
		//computations
		tests++;
		sum += score;

		//output & input sections
		cout << "Enter next grade, -99 to quit: ";
		cin >> score;
	}

	//output section
	cout << "Number of tests: " << tests << endl;

	//computations
	average = sum / tests;
	cout << "Average: " << fixed << setprecision(2) << average;
	cout << "\nHave a great day!";

	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}
