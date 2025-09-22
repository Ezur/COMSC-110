//*****************
//Program Name: Lab 5-1, Odd/Even? Non-Neg/Negative?
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Decide if a value is
//non-negative/negative and odd/even.
//*****************
#include <iostream>
using namespace std;

int main()
{
	//declarations
    int value;
    bool nonNeg = false,
    		neg = false,
			odd = false,
			even = false;

    //input & output
    cout << "Enter an integer, it can be positive or negative: ";
    cin >> value;

    //boolean computations
    if (value >= 0)
    	nonNeg = true;
    if (value < 0)
    	neg = true;
    if (value % 2 ==0)
    	even = true;
    if (!value % 2 ==0)
    	odd = true;

    //if statements
    if (nonNeg)
    {
    	if (even)	//value is even
    		cout << "\nYou entered a non-negative even value";
    	else
    		cout << "\nYou entered a non-negative odd value";
    }
    else if (neg)
    {
    	if (even)	//value is even
    		cout << "\nYou entered a negative even value\n";
    	else
    		cout << "\nYou entered a negative odd value\n";
    }

	//plagiarism statement
	cout << "\n\nThis code is my original programming work, "
			"and I received no help creating it.";

    return 0;
}
