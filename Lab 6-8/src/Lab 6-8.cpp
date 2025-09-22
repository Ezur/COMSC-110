//*****************
//Program Name: Lab 6-8, Wrap Seven
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program calculates the # of tests
//and their average. Uses a sentinel to end program.
//Allows the user to repeat entire program.
//*****************
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declarations
	double score = 0.0;
	double sum = 0.0;
	double average;
	int tests = 0;
	char repeat;

	do
	{
		//declaration
		tests = 0.0;	//re-sets values if user repeats program
		score = 0.0;

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
		{
			//output & input sections
			cout << "Run program again? Y/N: ";
			cin >> repeat;

			//computation
			repeat = tolower(repeat);
		}
		while (repeat != 'y' and repeat != 'n')
		{
			//output & input sections
			cout << "ERROR: Y/N only: ";
			cin >> repeat;
		}
	} while (repeat == 'y');

	//computation
	average = sum / tests;

	//output section
	cout << "Number of tests: " << tests << endl;
	cout << "Average: " << fixed << setprecision(2) << average;
	cout << "\nHave a great day!";

	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}
