//*****************
//Program Name: MIDTERM
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Calculate a random table of numbers.
//The user is able to customize the table characteristics.

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

//function prototypes
int getInt(int, int);
bool getYN();
int getOddEven();
int generateNum(int, int, int, int);

//global constants
const int WIDTH = 7;

int main()
{
	//declarations
	int MINRANDOM = 0, MAXRANDOM = 0;
	int ROWS, COLUMNS;

	int sum = 0, count = 0;
	int oddEven, result, randNum;

	//output sections & function calls
	cout << "Enter the minimum random number --> ";
	MINRANDOM = getInt(0, 10000);

	cout << "Enter the maximum random number --> ";
	MAXRANDOM = getInt(1, 99999);

	while (MAXRANDOM <= MINRANDOM)		//extra IVL for max random #
	{
		cout << "ERROR: Max # always has to be greater"
				" than or equal to the min #";
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "\nEnter the maximum random number --> ";
		MAXRANDOM = getInt(1, 99999);
	}

	//output sections & function calls
	cout << "How many rows? --> ";
	ROWS = getInt(1,15);
	cout << "How many columns? --> ";
	COLUMNS = getInt(1,15);

	cout << "Do you want (O)dd, (E)ven, or (B)oth types of numbers? ";
	oddEven = getOddEven();

	//SMALLEST&LARGEST declaration
	int smallest = MAXRANDOM + 1;
	int largest = MINRANDOM - 1;

	//OUTPUT Y/N DISPLAY
	cout << "Display the sum of the random #s (Y/N)? ";
	bool displaySum = getYN();
	cout << "Display the average of the random #s (Y/N)? ";
	bool displayAve = getYN();
	cout << "Display the smallest random # (Y/N)? ";
	bool displaySmall = getYN();
	cout << "Display the largest random # (Y/N)? ";
	bool displayLarge = getYN();

	//calculate random #s & display rows/columns
	for (int r = 0; r < ROWS; r++)		//number of rows
	{
		for (int c = 0; c < COLUMNS; c++)		//numbers of columns
		{
			randNum = generateNum(oddEven, MAXRANDOM, MINRANDOM, r + c);

			result = randNum;
			cout << setw(WIDTH) << result << " ";

			if (randNum > largest) largest = randNum;
			if (randNum < smallest) smallest = randNum;

			sum += randNum;		//sum
			count++;		//number of values in data
		}
		cout << endl;
	}

	//if true then display output
	if (displaySum == true) cout << "\nSum: " << sum << endl;
	if (displayAve == true) cout << "Average: " << sum / count << endl;
	if (displaySmall == true) cout << "Smallest #: " << smallest << endl;
	if (displayLarge == true) cout << "Largest #: " << largest << endl;

	return 0;
}

//generateNum(): Generates the random numbers inside the function
//Inputs: 3 operands (ints) | Returns: 1 operand (int)
int generateNum(int oddEven, int MAXRANDOM, int MINRANDOM, int seed)
{
	srand(time(0) + seed);
	int randNum = rand() % (MAXRANDOM - MINRANDOM + 1) + MINRANDOM;

	switch (oddEven)
	{

	case 1:		//odd
				while (randNum % 2 == 0)  //if randNum is even (not what we want), generate again
					randNum = rand() % (MAXRANDOM - MINRANDOM + 1) + MINRANDOM;
				return randNum;
				break;
	case 0:		//even
				while (randNum % 2 == 1)
					randNum = rand() % (MAXRANDOM - MINRANDOM + 1) + MINRANDOM;
				return randNum;
				break;
				//both
	case 2:		randNum = rand() % (MAXRANDOM - MINRANDOM + 1) + MINRANDOM;
				return randNum;
				break;

	default: break;
	}

}

//getOddEven(): User decides odd/even/both types of #s
//Inputs: none | Returns: 1 operand (int)
int getOddEven()
{
	char oddEven;
	cin >> oddEven;

	while (oddEven != 'O' and oddEven != 'E' and oddEven != 'B')
	{
		cout << "ERROR: only (O)dd, (E)ven, or (B)oth.";
		cout << "Enter which type of # you want --> ";
		cin >> oddEven;
	}

	if (oddEven == 'E') return 0;
	if (oddEven == 'O') return 1;
	if (oddEven == 'B') return 2;

}

//getYN(): Input validation for Yes/No value
//Inputs: none | Returns: 1 operand (bool)
bool getYN()
{
	char showCode;
	cin >> showCode;
	showCode = toupper(showCode);

	while (showCode != 'Y' and showCode != 'N')
	{
		cout << "ERROR: only Y/N please --> ";
		cin >> showCode;
	}

	if (showCode == 'Y') return true;
	if (showCode == 'N') return false;
}

//getInt(): Input validation for INT values
//Inputs: 2 operands (ints) | Returns: 1 operand (int)
int getInt(int min, int max)
{
	int input;
	cin >> input;

	while ((input < min) or (input> max) or cin.fail())
	{
		cout << "ERROR: " << min << "-" << max << " only: ";
		cin.clear();
		cin.ignore(1000, '\n');

		cout << "\nTry again: ";
		cin >> input;
	}
	return input;
}
