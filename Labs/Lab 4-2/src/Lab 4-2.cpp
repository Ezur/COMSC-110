//*****************
//Program Name: Lab 4-2: Tutor w/ Randoms
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Calculates a randomized mathematical equation.
//*****************
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

const int W1 = 8, W2 = 6;
const int MIN = 10, MAX = 99;

int main()
{

	//declarations, housekeeping
	int num1, num2, num3;

	//output
	cout << "Here's a math problem below; "
			"press ENTER to see the solution!\n";

	//random number calculations
	srand(time(0));
	num1 = (rand() % (MAX - MIN + 1)) + MIN;
	num2 = (rand() % (MAX - MIN + 1)) + MIN;
	num3 = (num1 + num2);

	//output
	cout << setw(W1) << right << num1 << endl;		//alignment for num1
	cout << setw(W2) << right << "+ "		//alignment for (+) and num2
		 << right << num2 << endl;
	cout << setw(W1) << right << "----";

	//input
	cin.get();		//user presses enter button, reveals code
	cout << setw(W1) << right << num3;		//alignment for num3

	//plagiarism statement
	cout << "\n\nThis code is my original programming work, "
			"and I received no help creating it.";

    return 0;
}
