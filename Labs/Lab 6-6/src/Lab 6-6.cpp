//*****************
//Program Name: Lab 6-6, Just Add Them Dude
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program adds together two inputs and displays
//the sum. User determines whether program repeats.
//*****************
#include <iostream>
using namespace std;

int main()
{
	//declarations
	double input, input2, sum = 0;
	char repeat;

	do
	{
		//output & input sections
		cout << "Enter two numbers and I'll add them: ";
		cin >> input >> input2;

		//computations
		sum = input + input2;
		cout << input << " + " << input2 << " = " << sum;

		//output & input sections
		cout << "\nRepeat program? Y/N: ";
		cin >> repeat;

		//computations
		repeat = toupper(repeat);
		while (repeat != 'Y' and repeat != 'N')
		{
			//output & input sections
			cout << "ERROR: Y or N only: ";
			cin >> repeat;
		}

	} while (repeat == 'Y');



	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}
