//*****************
//Program Name: Lab 9, Reference Variables & More
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program uses functions to accept values
//from the user then adds the values together. User has option
//to choose from two operations.
//*****************

#include <iostream>
using namespace std;

int menu();
void get_values(int&, int&);
void get_values(int&, int&, int&);

const int ROUNDS = 5;

int main()
{
    //declarations
    int value1, value2, value3;
    int choice;

    for (int i = 0; i < ROUNDS; i++)
    {
    	choice = menu();

    	switch (choice)
    	{
    	case 1:
				//call the function to obtain input
				get_values(value1, value2);

				//output the user input to the console
				cout << "Value 1: " << value1
					 << " | Value 2: " << value2;
				cout << " | Sum: " << (value1 + value2) << endl;
				break;

    	case 2:
				//call the function to obtain input
				cout << endl;
				get_values(value1, value2, value3);

				//output the user input to the console
				cout << "Value 1: " << value1 << " | Value 2: " << value2;
				cout << " | Value 3: " << value3;
				cout << " | Sum: " << (value1 + value2 + value3) << endl;
				break;
    	}

    }

    //plagiarism statement
	cout << "\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}

int menu()
{
	//declaration
	int input;

	//output menu
	cout << "Enter [1] to sum two values\n";
	cout << "      [2] to sum three values\n";
	cin >> input;

	//input validation
	while (input != 1 or input != 2 or cin.fail())
	{
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(1000, '\n');
		}
		cout << "ERROR: Input only [1] or [2]";
		cout << "\nTry again --> ";
		 cin >> input;
	}
	return input;
}

void get_values(int &v1, int &v2)
{
    static int count = 1;
    cout << "2- INPUT OPERATION #" << count << ": " << endl;
	cout << "Enter first integer: ";
    cin >> v1;
    cout << "Enter second integer: ";
    cin >> v2;
    count++;	//tracks the number of times 2-value is called
}

void get_values(int &v1, int &v2, int &v3)
{
    static int count = 1;
    cout << "3- INPUT OPERATION #" << count << ": " << endl;
	cout << "Enter first integer: ";
    cin >> v1;
    cout << "Enter second integer: ";
    cin >> v2;
    cout << "Enter third integer: ";
    cin >> v3;
    count++;	//tracks the number of times 3-value is called
}
