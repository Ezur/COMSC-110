//*****************
//Program Name: Lab 10-2, Sum the Odds
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program will produce and add 25 random
//numbers into an array add up and count all the odd elements.
//Program will ignore all even elements.
//*****************
#include <iostream>
#include <array>
#include <ctime>
using namespace std;

const int SIZE = 25;

int main()
{
	//declarations
	srand(time(0));
	int count = 0, sum = 0, totalOdd = 0;
	array<int, SIZE> values;

	//random computations
	for (int i = 0; i < SIZE; i++)
	{
		values[i] = rand() % (1000 - 100 + 1) + 100;
	}

	//output section & computations
	cout << "The odd numbers generated are: " << endl;

	for (int i = 0; i < SIZE; i++)
	{
		if (values[i] % 2 != 0)
		{
			sum += values[i];
			cout << values[i] << " ";
			count++;
			totalOdd++;
			if (count == 9)
			{
				count = 0;
				cout << endl;
			}
		}
	}

	//output sections
	cout << "\n\nThe sum of the odd elements is: " << sum << endl;
	cout << "There were " << totalOdd << " odd elements out of "
			"25 total elements.";
	cout << endl;


	//plagiarism statement
	cout << "\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}
