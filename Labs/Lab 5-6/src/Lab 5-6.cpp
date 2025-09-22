//*****************
//Program Name: Lab 5-6, Conditional Operators
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: 3 part program for user to
//follow directions and enter values in specific ranges
//*****************
#include <iostream>
using namespace std;

int main()
{
	//*P1/output & declaration
	cout << "***PART ONE***";
	float value1;

	//output & input sections
    cout << "\nEnter a float greater than 10.0: ";
    cin >> value1;

    //computations
    value1 > 10.0 ? cout << "Good job!" : cout << "Follow directions!";

	//*P2/output & declaration
	cout << "\n***PART TWO***";
	float value2;

	//output & input sections
	cout << "\nEnter a float between 10.0 - 20.0 (inclusive): ";
	cin >> value2;

	//computations
	value2 >= 10.0 and value2 <= 20.0 ? cout << "Good job!"
			: cout << "Follow directions!";

	//*P13/output & declaration
	cout << "\n***PART THREE***";
	float value3;

	//output & input sections
	cout << "\nEnter any positive or negative number: ";
	cin >> value3;

	//computations
	value3 < 0 ? cout << "Y is assigned the value of -100"
			: cout << "Y is assigned the value of 100";

	//final output
	cout << "\nProgram ending.";

	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}
