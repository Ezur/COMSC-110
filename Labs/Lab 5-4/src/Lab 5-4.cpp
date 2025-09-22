//*****************
//Program Name: Lab 5-4, Fruit Switch
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: User selects a letter from a switch driven
//menu and program outputs a fruit that begins with that letter.
//Accepts only uppercase options.
//*****************
#include <iostream>
using namespace std;

int main()
{
	//declarations
	char choice;

	//input section
	cout << "Enter choice A-E to display a fruit name that "
				"starts with that letter." << endl;
		cout << "Enter A\n";
		cout << "      B\n";
		cout << "      C\n";
		cout << "      D\n";
		cout << "      E\n";
	cin >> choice;

	//computations
	switch(choice)
	{
	case 'A': cout << "Your choice (A-E only): A\n";
		cout << "Your fruit that starts with an \"A\" is: "
			 << "Apricot!\n";
		break;

	case 'B': cout << "Your choice (A-E only): B\n";
		cout << "Your fruit that starts with a \"B\" is: "
			 << "Blueberry!\n";
		break;

	case 'C': cout << "Your choice (A-E only): C\n";
		cout << "Your fruit that starts with a \"C\" is: "
			 << "Cherry!\n";
		break;

	case 'D': cout << "Your choice (A-E only): D\n";
		cout << "Your fruit that starts with a \"D\" is: "
			 << "Date!\n";
		break;

	case 'E': cout << "Your choice (A-E only): E\n";
		cout << "Your fruit that starts with an \"E\" is: "
			 << "Emu Apple!\n";
		break;

	default: cout << "ERROR: Enter A-E only! Please re-run the program.\n";

	}

	cout << "Program ending.";

	//plagiarism statement
	cout << "\n\nThis code is my original programming work, and I received no help creating it.";

    return 0;
}
