//*****************
//Program Name: Program 3, Math Tutor
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: -
//*****************
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main()
{
	//declarations
	int choice, correct = 0;
	double answer = 0;
	double number,
		   number2;
	srand(time(0));

	do
	{
		//output sections
		cout << "***MATH TUTOR 2021***" << endl
			 << "I will generate two random integers"
				" in the range 10-50." << endl;
		cout << "You can choose which operation "
				"you'd like to perform on these numbers. "
			 << "Enter your answer then, and I'll check it.";
		cout << "\n\nEnter choice 1-7 to choose which"	//start of menu
				" operation to perform. You may enter either"
				" the number 1-7 or symbol in ()" << endl;
		cout << "      1: addition (+) \n";
		cout << "      2: subtraction (-) \n";
		cout << "      3: multiplication (*) \n";
		cout << "      4: modulus (%) \n";
		cout << "      5: identify which is greater (>) \n";
		cout << "      6: test for odd/even \n";
		cout << "      7: quit \n";
		cout << "Your choice --> ";
		cin >> choice;

		//computations (random numbers)
		number = rand() % (50 - 10 + 1) + 10;
		number2 = rand() % (50 - 10 + 1) + 10;

		//computations
		switch(choice)
		{
		case '+':
		case 1:
				//output & input sections
				cout << "\n***ADDITION MODULE***\n"
					 << number << " + " << number2 << " = ?"
					 << "\nYour answer --> ";
				cin >> answer;

				//computations
				correct = number + number2;
				if (answer == correct)
					cout << "Correct!\n\n";
				else
				{
					cout << "Incorrect. The correct answer was "
						 << correct << endl << endl;
				}
					break;
		case '-':
		case 2:
				//output & input sections
				cout << "\n***SUBTRACTION MODULE***\n"
					 << number << " - " << number2 << " = ?"
					 << "\nYour answer --> ";
				cin >> answer;

				//computations
				correct = number - number2;
				if (answer == correct)
					cout << "Correct!";
				else
				{
					cout << "Incorrect. ";
					cout << "The correct answer was " << correct << endl << endl;
				}
					break;
		case '*':
		case 3:
				//output & input sections
				cout << "\n***MULTIPLICATION MODULE***\n"
					 << number << " * " << number2 << " = ?"
					 << "\nYour answer --> ";
				cin >> answer;

				//computations
				correct = number * number2;
				if (answer == correct)
					cout << "Correct!";
				else
				{
					cout << "Incorrect. The correct answer was "
						 << correct << endl << endl;
				}
					break;
		case '%':
		case 4:
				//output & input sections
				cout << "\n***MODULUS MODULE***\n"
					 << number << " % " << number2 << " = ?"
					 << "\nYour answer --> ";
				cin >> answer;

				//computations
				correct = (int)number % (int)number2;
				if (answer == correct)
					cout << "Correct!";
				else
				{
					cout << "Incorrect. The correct answer was "
							<< correct << endl << endl;
				}
					break;
		case '>':
		case 5:
				//output & input sections
				cout << "\n***GREATER MODULE***\n"
					 << "Of " << number << " and " << number2 << ","
						" which is greater? --> ";
				cin >> answer;

				//computations
				if (number > number2)
					correct = number;
				else
					correct = number2;

				if (answer == correct)
					cout << "Correct!" << endl << endl;
				else
				{
					cout << "Incorrect. The correct answer was "
						 << correct << endl << endl;
				}
					break;
		case 6:
				{
					//declarations
					int i = 0, number, number2;
					char oddOrEven;
					number = rand() % (50 - 10 + 1) + 10;
					number2 = rand() % (50 - 10 + 1) + 10;

					//output section
					cout << "\n***ODD/EVEN MODULE***\n";
				do
				{
					//declarations
					bool even = false,
						 odd = false;
					i++;
					int numToUse;

					//computations
					if (i == 1) {
					    numToUse = number;
					    cout << "Is " << numToUse << " (O)dd or (E)ven? "
					    	 << "Your answer --> ";
					} else {
					    numToUse = number2;
					    cout << "How about " << numToUse << " -- (O)dd or (E)ven? "
					    	 << "Your answer --> ";
					}
					cin >> oddOrEven;

					//computations
					oddOrEven = toupper(oddOrEven);
					if (numToUse % 2 == 0)
						even = true;
					if (numToUse % 2 != 0)
						odd = true;

					//computations & output sections
					while (even and oddOrEven == 'E')
					{
						cout << "Correct." << endl << endl;
						break;
					}
					while (even and oddOrEven == 'O')
					{
						cout << "Incorrect. The correct answer is Even."
							 << endl << endl;
						break;
					}
					while (odd and oddOrEven == 'O')
					{
						cout << "Correct." << endl << endl;
						break;
					}
					while (odd and oddOrEven == 'E')
					{
						cout << "Incorrect. The correct answer is Odd."
							 << endl << endl;
						break;
					}
					while (oddOrEven != 'O' and oddOrEven != 'E')
					{
						cout << "ERROR: (O)dd or (E)ven only: ";
						cin >> oddOrEven;
					}
				} while (i != 2);
						break;
				}
				case 7:
						//output sections
						cout << "\nThanks for using Math Tutor! "
								"\nPROGRAM ENDING.";
						return 0;
				default: cout << "ERROR: Enter 1-7 only.\n\n";
				}
			} while (choice != 7);

	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}



//Great work!
//
//Great idea to have the user enter + for addition, in addition to entering 1 in the menu. But it didn't work! This is because the variable "choice" is an int, but when we enter a char, the input fails.
//
//You could solve this by having the user simply enter a string. You can test if the string is the character + for addition. If it's not, you can convert the string to an int, and use that in your switch.
//
//So noble effort here! I understand what you were going for!

// - Prof Dietrich




