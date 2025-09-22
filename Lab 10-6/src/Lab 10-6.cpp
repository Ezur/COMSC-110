//*****************
//Program Name: Lab 10-6, Presidential Order
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program will output two parallel arrays
//and display their relationships to eachother.
//*****************
#include <iostream>
#include <fstream>
#include <array>
using namespace std;

const int SIZE = 5;

int main()
{
	//declarations
	array<string, SIZE> presidents = {"Lincoln", "Grant", "Eisenhower",
									  "Clinton", "Obama"};
	array<int, SIZE> presNumbers = {16, 18, 34, 42, 44};

	//output section
	cout << "List of Presidents: " << endl;

	for (int i = 0; i < SIZE; i++)
		cout << "#" << presNumbers[i] << ": "
			 << "  " << presidents[i] << endl;

	//plagiarism statement
	cout << "\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}
