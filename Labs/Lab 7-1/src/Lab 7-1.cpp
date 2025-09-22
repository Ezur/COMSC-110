//*****************
//Program Name: Lab 7-1, Student Grades
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program calculates average grades on
//tests for multiple students.
//EXTRA CREDIT OPTION
//*****************
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declarations
	double score, sum = 0, average;
	int t, students, tests;

	//welcome output & instructions
	cout << "***GRADE CALCULATOR***\n"
		 << "This program will calculate average grades for "
			 "__ students, using __ test scores per student.\n";
	cout << "\nEnter the number of students and the number of"
			" test scores SEPARATED BY A SPACE: ";
	cin >> students >> tests;
	while (students < 1 or tests < 1 or cin.fail())	//IVL students/tests
													// at least 1
	{
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(1000, '\n');
		}
	cout << "ERROR! Entry must be AT LEAST '1': ";
	cin >> students >> tests;
	}

	//loop calculations
	for (int s = 1; s <= students; s++)
	{
		sum = 0;
		cout << "\n~Enter grades for Student #" << s << "~ \n";
		for (t = 1; t <= tests; t++)
		{
			cout << "\tTest #" << t << ": ";
			cin >> score;
			while (score < 0 or cin.fail())		//IVL score at least 0
			{
				if (cin.fail())
				{
					cin.clear();
					cin.ignore(1000, '\n');
				}
			cout << "ERROR! Entry must be AT LEAST '0': ";
			cin >> score;
			}
			if (cin.fail())		//IVL score must be a number
			{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "ERROR! Enter a number only: ";
				cin >> score;
			}
		sum += score;
		}
	average = sum / tests;		//statistics
	cout << "Student #" << s << "'s average: ";
	cout << fixed << setprecision(2) << average << endl;
	}

	//goodbye
	cout << "\nProgram ending.";

	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";

	return 0;
}
