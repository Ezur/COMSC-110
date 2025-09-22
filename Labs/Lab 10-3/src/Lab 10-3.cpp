//*****************
//Program Name: Lab 10-3, File Movie Favs
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program will read a file and populate
//a string array with its contents.
//*****************
#include <iostream>
#include <array>
#include <fstream>
using namespace std;

const int SIZE = 10;

int main()
{
	//declarations
	ifstream fin("movies.txt");
	int i = 0;
	array<string, SIZE> titles;

	//read strings from file
	while (getline(fin, titles[i++]));

	fin.close();

	//output section
	for (int i = 0; i < SIZE; i++)
	{
		cout << titles[i] << endl;
	}

	//plagiarism statement
	cout << "\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}
