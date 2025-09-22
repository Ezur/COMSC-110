//*****************
//Program Name: Lab 6-2, ASCII Table
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Displays ASCII Table characters
//and numbers for codes 33-126
//*****************
#include <iostream>
using namespace std;

int main()
{
	//declarations
	int code = 0;

	//output sections
	cout << "***ASCII TABLE***" << endl << endl;
	cout << "Code\tChar\n";
	cout << "----\t----\n";

	//computations
	for (code = 33; code <= 126; code++)
		cout << code << "\t" << (char)code << endl;

	//plagiarism statement
		cout << "\n\nThis code is my original programming work,"
				" and I received no help creating it.";

	return 0;
}
