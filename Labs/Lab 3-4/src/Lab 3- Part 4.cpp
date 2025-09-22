//*****************
//Program Name: Set up a Column
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Calculates the values of three numbers and outputs the sum and average.
//*****************
#include <iostream>
#include <iomanip>
using namespace std;

const int W1 = 10, W2 = 17, W3 = 7;

int main()
{

//declarations
double num1 = 25.42;
double num2 = 65.44;
double num3 = 54.23;

double sum, average;

//input section
cout << fixed << setprecision(2);

cout << setw(W1) << right << "Amounts:" << endl;

cout << setw(W2) << num1 << endl
		<< setw(W2)<< num2 << endl
		<< setw(W2) << num3 << endl;			//sets the arrangement of the numbers

//computations
sum = num1 + num2 + num3;
cout << setw(W1) << right << "Sum:"
	 << setw(W3) << sum << endl;

average = sum / 3;
cout << setw(W1) << right << "Average:"
	 << setw(W3) << average << endl;


cout << endl << "This code is my original programming work, and I received no help creating it.";

    return 0;
}
