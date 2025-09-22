//*****************
//Program Name: Lab 4-1: Tutor
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Calculates a simple mathematical equation.
//*****************
#include <iostream>
#include <iomanip>
using namespace std;

const int W1 = 8, W2 = 6;

int main()
{
    //declarations, housekeeping
	int num1 = 10, num2 = 20, num3 = 30;

	//output
	cout << "Here's a math problem below; press ENTER to "
			"see the solution!" << endl;
	cout << setw(W1) << right << num1 << endl;	//alignment for num1
	cout << setw(W2) << right << "+ "	//alignment for (+) and num2
		 << right << num2 << endl;
	cout << setw(W1) << right << "----";

	//input
	cin.get();		//user presses enter button, reveals solution

	cout << setw(W1) << right << num3;		//alignment for num3

	//plagiarism statement
	cout << "\n\nThis code is my original programming work, "
			"and I received no help creating it.";

    return 0;
}
