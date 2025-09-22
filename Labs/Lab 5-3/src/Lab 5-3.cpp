//*****************
//Program Name: Lab 5-3, Whoops, that's an error
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: User inputs an integer between 10-20
//and program checks if it's inside the range.
//*****************
#include <iostream>
using namespace std;

int main()
{
	//declaration
	int value;

	//output & input sections
    cout << "Enter an integer between 10-20: ";
    cin >> value;

    //computations
    value <= 20 and value >= 10 ?
    		cout << "\nYou entered: " << value :
			cout << "\nERROR: Re-run program.";

	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}
