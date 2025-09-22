//*****************
//Program Name: Lab 6-1, Summation Program
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: User enters a positive integer and
//program outputs the sum of all integers from 0 to x number inclusive.
//*****************
#include <iostream>
using namespace std;

int main()
{
	//declarations
	int posInt;
	double sum = 0;

	//output & input sections
	cout << "***Summation Program***" << endl;
    cout << "\nEnter a positive integer to display the sum of all"
    		" positive integers up to and"
    		" including that integer --> ";
    cin >> posInt;
    cout << "\nThe sum of all positive integers from 0 to "
    	 << posInt << " is ";

    //for loop computations
    for (int i = 0; i <= posInt; i++)
    	sum += i;

    //output sections
    cout << sum << endl;
    cout << "\nProgram ending. Have a nice day";

	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}
