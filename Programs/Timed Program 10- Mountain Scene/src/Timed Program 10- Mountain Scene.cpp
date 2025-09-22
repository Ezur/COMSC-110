//*****************
//Program Name: Lab 10-7, Compare Arrays
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program outputs a mountain scene with three peaks.
//*****************
#include <iostream>
#include <array>
using namespace std;

//function prototype
void print_row(array<int, 3> &);

int main()
{
	//declaration
	array<int, 3> heights = {3, 6, 4};

	//function call
	print_row(heights);

	//plagiarism statement
	cout << "\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}

void print_row (array<int, 3> &arr)
{
	for (int k = 0; k < arr[k]; k++)
	{
		for (int i = 0; i <= arr[k]; i++)
		{
			for (int j = 0; j < i; j++)
				cout << "* ";
		cout << endl;
		}

		for (int i = arr[k] - 1; i>= 1; i--)
		{
			for (int j = 0; j < i; j++)
				cout << "* ";
		cout << endl;
		}
	}

}
