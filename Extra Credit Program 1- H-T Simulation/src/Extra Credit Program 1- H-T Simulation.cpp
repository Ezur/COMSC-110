//*****************
//Program Name: Extra Credit Program 1, H/T Simulation
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: This program runs ten simulations.
//Each simulation simulates randomly flipping a coin between
//1500-15,000 times and records the results.
//*****************
#include <iostream>
#include <array>
#include <ctime>
#include <iomanip>
#include <string>
using namespace std;

const int MAXRANDOM = 15000, MINRANDOM = 1500,
		  SIZE = 5,
		  COLS = 10, ROWS = 11,
		  W1 = 10, W2 = 16;

int generateTosses();
int flipCoin();
void printArray(array<array<double, COLS>, ROWS>, int &);


int main()
{
	//declarations
	srand(time(0));
	int tosses = 0, headsOrTails = 0, index = 0,
		totalTosses = 0, totalHeads = 0, totalTails = 0;
	double heads = 0, tails = 0;
	array<string, ROWS> numbersArray = {"Sim:", "ONE", "TWO", "THREE",
										"FOUR", "FIVE", "SIX", "SEVEN",
										"EIGHT", "NINE", "TEN"};

	array<string, SIZE> labelsArray = {"Tosses", "Heads", "Tails",
									   "Heads%", "Tails%"};

	array<array<double, COLS>, ROWS> array;

	//output section
	cout << "*****COIN FLIP SIMULATOR********";
	cout << "\n\nThis program will run a coin-tossing simulation"
			" 10 times. Each simulation will flip a coin between"
			" 1500 and 15000 times and record the results. "
			"At the end, you will see a table of results "
			"per round as well as overall.";

	cout << "\n\n***RESULTS***\n\n";

	//computations
	for (int i = 0; i < 10; i++)
	{
		heads = 0, tails = 0;
		tosses = generateTosses();

		for (int j = 0; j < tosses; j++)
		{
			headsOrTails = flipCoin();
			if (headsOrTails == 1)	//counter variables for heads/tails
				heads++;
			else
				tails++;
		}
		totalTosses += tosses;	//running total of each variable
		totalHeads += heads;
		totalTails += tails;

		array[0][i] = tosses;	//assign value of variable to array location
		array[1][i] = heads;
		array[2][i] = tails;
		array[3][i] = (heads/tosses) * 100;
		array[4][i] = (tails/tosses) * 100;
	}

	//output headers sections
	for (int r = 0; r < ROWS; r++)
		cout << setw(W1) << right << numbersArray[r];
	cout << endl;

	for (int c = 0; c < SIZE; c++)
	{
		cout << setw(W1) << right << labelsArray[c];
		printArray(array, index);
	}
	cout << endl;

	//output statistics sections
	cout << "Overall results:" << endl;
	cout << setw(W2) << right << "Total sims: "
		 << setw(W1) << right << COLS << endl;
	cout << setw(W2) << right << "Total tosses: "
		 << setw(W1) << totalTosses << endl;
	cout << setw(W2) << right << "Total heads: "
		 << setw(W1) << totalHeads << endl;
	cout << setw(W2) << right << "Total tails: "
		 << setw(W1) << totalTails << endl;
	cout << setw(W2) << right << "Heads pct: "
		 << setw(W1) << ((double)totalHeads / totalTosses) * 100
		 << "%" << endl;
	cout << setw(W2) << right << "Tails pct: "
		 << setw(W1) << ((double)totalTails / totalTosses) * 100 << "%";

	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}
//generateTosses(): calculates the number of times the coin will be flipped
//Inputs: none | Returns: random number of flips (int)
int generateTosses()
{
	int randNum = rand() % (MAXRANDOM - MINRANDOM + 1) + MINRANDOM;

	return randNum;
}
//flipCoin(): calculates either heads or tails
//Inputs: none | Returns: random choice of 0 or 1 (int)
int flipCoin()
{
	int headsOrTails = 0;
	headsOrTails = rand() % (1 - 0 + 1) + 0;	//heads = 1, tails = 0

	return headsOrTails;
}

//printArray(): outputs the values of the 2D array
//Inputs: 2D array (doubles), index (int) | Returns: none
void printArray(array<array<double, COLS>, ROWS> arr, int &index)
{
	for (int c = 0; c < COLS; c++)
	{
		if (index == 3 or index == 4)
			cout << fixed << setprecision(1);
		cout << setw(W1) << arr[index][c];
	}
	index++;
	cout << endl;
}

