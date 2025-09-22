//*****************
//Program Name: Lab 3-3: Average of Four
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Calculates and outputs the sum and average of four integers.
//*****************
#include <iostream>
#include <iomanip>
using namespace std;

const int W1 = 10, W2 = 7;

int main()
{


//declarations
int value1, value2, value3, value4;

//input section
cout << "Enter four integers, separated by spaces: ";
cin >> value1 >> value2 >> value3 >> value4;

//computations
double sum = value1 + value2 + value3 + value4;
cout << setw(W1) << right << "Sum: ";
cout << setw(W2) << right<< sum << endl;

double average = sum / 4;
cout << setw(W1) << right << "Average: ";
cout << setw(W2) << right << average << endl << endl;

//plagiarism statement
cout << "This code is my original programming work, and I received no help creating it.";

    return 0;
}
