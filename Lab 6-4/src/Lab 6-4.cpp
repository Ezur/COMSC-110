//*****************
//Program Name: Lab 6-4, Square the Cube
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Generates a table of squares
//and cubes, 0-15 inclusive.
//*****************
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//declarations
	int number = 0;
	int square = 0;
	int cube = 0;

	//output sections
	cout << "***TABLE OF SQUARES AND CUBES***\n";
	cout << "Number\tSquare\tCube\n";
	cout << "-----\t-----\t----\n";

	//computations
	for (number = 0; number <= 15; number++)
	{
		square = pow (number , 2.0);
		cube = pow (number, 3.0);
		cout << number << "\t" << square << "\t"
			 << cube << endl;
	}

	//plagiarism statement
	cout << "\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}
