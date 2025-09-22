//*****************
//Program Name: Lab 6-5, Summation Program
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: User enters # of random numbers they want
//to generate in range of 50-50,000. Program gives title to
//highest/lowest #s.
//*****************
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	//declarations
	int input, high, low;
	double number;
	srand(time(0));

	//output & input sections
	cout << "**RANDOM NUMBER GENERATOR**";
	cout << "\nHow many random numbers do you want"
			" to generate (50-50,000): ";
	cin >> input;

	//input validation
	while (input < 50 or input > 50000)
	{
		cout << "ERROR! 50-50000 only: ";
		cin >> input;
	}

	//output sections
	cout << "\n > Results complete.\n";
	cout << " > " << input << " random numbers generated in "
				"range 1-32,000" << endl;

	//computations
	for (int i = 1; i <= input; i++)
	{
			number = rand() % (32000 - 1 + 1) + 1;

			if (i == 1)
				high = low = number;
			else
			{
				if (number > high) high = number;
				if (number < low) low = number;
			}
		}

	//output sections
	cout << " > Maximum: " << high << endl;
	cout << " > Minimum: " << low << endl;

	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}
