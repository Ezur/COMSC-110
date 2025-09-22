//*****************
//Program Name: Final Exam! Wheel of Fortune
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Analyze a text file to sort letter frequencies
// in ascending order and report statistics.
//*EXTRA CREDIT OPTION LINE 123*//
//*****************
#include <iostream>
#include <fstream>
#include <array>
#include <cctype>
#include <cmath>
using namespace std;

//struct
struct Letter
{
	char actual_letter;
	int count;
};

//constant variable
const int SIZE = 26, W1 = 35, W2 = 7;

//function prototype
void populate_array(array<Letter, SIZE> &);
void bubbleSort(array<Letter, SIZE> &);
void swap(int &, int &);
void displayArray(array<Letter, SIZE>, int, int, int);

int main()
{
    //declarations
	ifstream fin("story.txt");
	array<Letter, SIZE> letters;
	string line = " ";
	int lowers = 0, uppers = 0, puncts = 0;

	populate_array(letters);

	//computations
	while(getline(fin, line))	//counters for statistics
		for (int i = 0; i < line.length(); i++)
		{
			if (isupper(line[i]))
				uppers++;
			if (islower(line[i]))
				lowers++;
			if (ispunct(line[i]))
				puncts++;
		}

	bubbleSort(letters);

	//output sections
	cout << "Most frequent letter counts:" << endl;
	displayArray(letters, uppers, lowers, puncts);

    //plagiarism statement
	cout << "\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}

//populate_array(): Function reads through file and populates array
//and updates count variable
//Inputs: reference array of struct Letter | Returns: none
void populate_array(array<Letter, SIZE> &l)
{
	ifstream fin("story.txt");
	string line = " ";

	for (int i = 0; i < SIZE; i++)	//populate ASCII letters A-Z
	{
		l[i].actual_letter = i + 65;
		l[i].count = 0;
	}

	while(getline(fin, line))
		for (int i = 0; i < line.length(); i++)
			for (int j = 0; j < SIZE; j++)
			{
				line[i] = toupper(line[i]);
				if (line[i] == l[j].actual_letter)
					l[j].count++;
			}
	fin.close();
}

//bubbleSort(): Uses Bubble Sort to arrange letters in ascending order
//according to their counter value
//Inputs: reference array of struct Letter | Returns: none
void bubbleSort(array<Letter, SIZE> &ltrs)
{
    for (int maxElement = SIZE - 1; maxElement > 0; maxElement--)
        for (int index = 0; index < maxElement; index++)
            if (ltrs[index].count < ltrs[index + 1].count)
            {
                swap(ltrs[index].count, ltrs[index + 1].count);
                swap(ltrs[index].actual_letter, ltrs[index + 1].actual_letter);
            }
}

//swap(): Uses a temporary var to switch values btwn 2 variables
//Inputs: 2 reference int variables | Returns: none
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

//displayArray(): Function displays the array and file statistics
//Inputs: array of struct Letter, 3 counter ints | Returns: none
void displayArray(array<Letter, SIZE> l, int upp, int low, int pun)
{
	int width = l[0].count;

	for (int i = 0; i < SIZE; i++)
		cout << right << setw(W2) << l[i].actual_letter << ": "
			 << setw(log10(width) + 1) << l[i].count << endl;
	cout << endl;
	cout << right << setw(W1) << "Number of uppercase letters: "
		 << right << setw(W2) << upp << endl;
	cout << right << setw(W1) << "Number of lowercase letters: "
		 << right << setw(W2) << low << endl;
	cout << right << setw(W1) << "Number of punctuation characters: "
		 << right << setw(W2) << pun << endl;
}

