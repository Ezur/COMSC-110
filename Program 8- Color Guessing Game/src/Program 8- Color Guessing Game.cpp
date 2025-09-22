//*****************
//Program Name: Program 8, Color Guessing Game
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program is a color guessing game.
// User inputs guess and computer outputs whether they were
// right or not. Displays overall win statistics.
//*****************
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

//function prototypes
void results(int, int);
bool compare(int, int, int);
int guess();
void displayMenu(int);
void welcome();

const int MAX = 6, MIN = 1;

int main()
{
    //housekeeping and declarations
	int choice;	//user's guess
	int count = 0;	//round number
	int wins = 0;	//counts if user is correct - win counter
	int trueOrFalse;	//checks if it's true or false
	int choose;		//var that takes on the guess()

	//welcome display
	welcome();
	while (count != 10)
	{
		count++;
		displayMenu(count);
		choose = guess();
		trueOrFalse = compare(choice, count, choose);
		if (trueOrFalse == true)
			wins++;
	}
	results(count, wins);

	//plagiarism statement
	cout << "\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}

//results(): Receives # of correct guesses & displays the results
//Inputs: 2 operands (ints) | Returns: none
void results(int count, int wins)
{
	cout << "\n\n   > Game results:";
	cout << "\n   > Rounds: " << count;
	cout << "\n   > Wins: " << wins
		 << " (" << (wins * count) << "%)" << endl;
}

//compare(): Receives user's guess, generates random number
// & converts ints to strings, compares to user's guess.
//Inputs: 1 operand (int) | Returns: 2 operands (bools)
bool compare(int choice, int count, int choose)
{
	//declarations
	srand(time(0));
	string userColor, computerChoice;
	int randNum = rand() % (MAX - MIN + 1) + MIN;
	string r = "Red";
	string g = "Green";
	string b = "Blue";
	string y = "Yellow";
	string o = "Orange";
	string p = "Purple";

	//conversions
	switch (choose)
	{
	case 1: userColor = r;
			break;
	case 2: userColor = g;
			break;
	case 3: userColor = b;
			break;
	case 4: userColor = y;
			break;
	case 5: userColor = o;
			break;
	case 6: userColor = p;
			break;
	default: cout << "Invalid";
	}

	//output
	cout << "     > You guessed: " << userColor;
	cout << "\n     > Round #" << count << " result: ";

	//conversions
	switch(randNum)
	{
	case 1: computerChoice = r;
			break;
	case 2: computerChoice = g;
			break;
	case 3: computerChoice = b;
			break;
	case 4: computerChoice = y;
			break;
	case 5: computerChoice = o;
			break;
	case 6: computerChoice = p;
			break;
	}

	if (choose == randNum)
	{
		cout << "CORRECT!";
		return true;
	}
	else
	{
		cout << "WRONG; the computer picked: " << computerChoice;
		return false;
	}
}

//guess(): Get's user's guess, guess is validated
//then guess is returned back to main program
//Inputs: none | Returns: 1 operand (int)
int guess()
{
	static int choice;
	cin >> choice;

	while (choice < 1 or choice > 6)
	{
		cout << "ERROR: Please enter 1-6";
		cout << " Try again: ";
		cin >> choice;
	}
	return choice;
}

//displayMenu(): Receives count variable & displays
//menu option for each color.
//Inputs: 1 operand (int) | Returns: none
void displayMenu(int count)
{
	cout << "\n**** Round #" << count << "! ****";
	cout << "\n     > Select: \n\t1-Red \n\t2-Green "
			"\n\t3-Blue \n\t4-Yellow \n\t5-Orange \n\t6-Purple";
	cout << "\n     > ";
}

//welcome(): Displays welcome output. Waits for user to hit
//ENTER for program to continue.
//Inputs: none | Returns: none
void welcome()
{
	cout << "***Color Guessing Game***";
	cout << "\n   -------------------";
	cout << "\nGuess a color and the computer will tell you if you're right!"
		 << "\nWe will be playing 10 rounds.";
	cout << "\n   Press ENTER to start-->";
	cin.get();
}
