//*****************
//Program Name: Program 13- Vote Tallies
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program tallies vote counts with
//a dynamic array (using pointers).
//*****************
#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

//constant variable
const int W1 = 10;

//function prototype
void sort(int*, int);

int main()
{
	//declarations
	int numPolls = 0, votes = 0;
	double sum = 0;
	int *arrayPtr = new int[numPolls];	//dynamic array

	//-----------------------------------------------

	//output & input sections
	cout << "How many polling locations do you have? ";
	cin >> numPolls;

	for (int i = 0; i < numPolls; i++)
	{
		cout << "Enter vote tally for polling location #" << i+1 << ": ";
		cin >> votes;

		while (votes < 0 or cin.fail())	//input validation
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "\n> ERROR: must be a positive number: ";
			cin >> votes;
		}
		*(arrayPtr + i) = votes;
	}

	//function call
	sort(arrayPtr, numPolls);

	//output sections
	cout << "\nVote tallies in ascending order, and average:" << endl << endl;
	cout << setw(W1) << "Votes" << endl;
	cout << setw(W1) << "-----" << endl;

	for (int i = 0; i < numPolls; i++)
	{
		cout << setw(W1) << *(arrayPtr + i) << endl;
		sum += *(arrayPtr + i);
	}
	cout << endl;

	cout << "Average vote tally: "
		 << fixed << setprecision(2) << (sum / numPolls);

	//pointer housekeeping
	delete [] arrayPtr;
	arrayPtr = nullptr;

	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}

//sort(): Select Sort function to arrange values low to high
//Inputs: 2 values (int pointer, int) | Returns: none
void sort(int* votes, int numPolls)
{
    int minIndex;
    int minValue;

    for (int i = 0; i < (numPolls - 1); i++)
    {
        minIndex = i;
        minValue = *(votes + i);

        for (int index = i + 1; index < numPolls; index++)
        {
            if (*(votes + index) < minValue)
            {
                minValue = *(votes + index);
                minIndex = index;
            }
        }

        *(votes + minIndex) = *(votes + i);
        *(votes + i) = minValue;
    }
}

