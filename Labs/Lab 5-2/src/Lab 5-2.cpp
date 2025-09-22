//*****************
//Program Name: Lab 5-2, Odd or Even?
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Reports whether two integers are odd or even.
//*****************
#include <iostream>
using namespace std;

int main()
{
	//declarations
	int value1, value2;
	bool even = false,
		 even2 = false,
		 odd = false,
		 odd2 = false;

	//output & input section
	cout << "Enter two integers, separated by a space: ";
	cin >> value1 >> value2;

	//boolean computations
	if (value1 % 2 == 0)
		even = true;
	if (value2 % 2 == 0)
		even2 = true;

	if (value1 % 2 != 0)
		odd = true;
	if (value2 % 2 != 0)
		odd2 = true;

	//if computations
	if (even and even2)
		cout << "\nBoth values you entered are even.";
	else if (odd and odd2)
		cout << "\nBoth values you entered are odd.";
	else if (even and odd2)
		cout << "\nThe first value you entered is even; the second is odd.";
	else if (odd and even2)
		cout << "\nThe first value you entered is odd; the second is even.";
	else
		cout << "\nRestart program.";


//	if (value1 % 2 == 0 and value2 % 2 == 0)
//		cout << "Even, Even";
//
//	else if ((value1 % 2 != 0) and (value2 % 2 != 0))
//		cout << "Odd, Odd";
//
//	else if (value1 % 1 == 0 and (value2 % 2 != 0))
//		cout << "Even, Odd";
//
//	else if ((value1 % 2 != 0) and (value2 % 2 == 0))
//		cout << "Odd, Even";
//
//	else
//		cout << "Restart";


	//plagiarism statement
	cout << "\n\nThis code is my original programming work, and I received no help creating it.";

		return 0;
}
