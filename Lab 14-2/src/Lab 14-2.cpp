//*****************
//Program Name: Lab 14-2, Sentence Conversion
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program allows user to enter any string & code
//will output all characters in string up to the 1st punctuation mark
//AND convert string to all lowercase characters.
//*****************
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	//declaration
	string input = " ";

	//output sections
	cout << "Enter anything and I'll do two things:\n";
	cout << "\t[1] Return everything up to the first punctuation"
			"mark; and\n";
	cout << "\t[2] Return the input in all lowercase:\n";

	//output & input sections
	cout << "Please enter your input: ";
	getline(cin, input);

	cout << "\nAll characters up to the first punctuation mark:\n\t";
	for (int i = 0; i < input.length(); i++)
	{
		if (ispunct(input[i]))
			break;
		cout << input[i];
	}
	cout << endl;

	cout << "\nInput all converted to lowercase:\n\t";
	for (int i = 0; i < input.length(); i++)
		input[i] = tolower(input[i]);
	cout << input;

	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}
