//*****************
//Program Name: Program 14, A Tale of Two Cities
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program will process a novel and count
//the numbers of letters in it. (A-Z  and  a-z)
//*****************
#include <iostream>
#include <fstream>
#include <array>
using namespace std;

//constant variables
const int COLS = 52, ROWS = 2, SIZE = 26;

int main()
{
	//declarations
	ifstream fin ("taleoftwocities.txt");
	array<array<int, COLS>, ROWS> array;
	string line = " ";

	for (int i = 0; i < SIZE; i++)
	{
		array[0][i] = i + 65;
		array[0][i + SIZE] = i + 97;
		array[1][i] = 0;
		array[1][i + SIZE] = 0;
	}

	//computations
	while (getline(fin, line))
		for (int i = 0; i < line.length(); i++)
			for (int j = 0; j < COLS; j++)
				if (line[i] == array[0][j])
					array[1][j]++;

	//output sections
	cout << "Story analysis complete. Results:\n";
	for (int i = 0; i < SIZE; i++)
		cout << (char)array[0][i] << ":  " << array[1][i] << "\t   "
		 	 << (char)array[0][i + SIZE] << ":  " << array[1][i + SIZE] << endl;

	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}
