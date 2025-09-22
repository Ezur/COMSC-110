//*****************
//Program Name: Lab 14-1, Int Input with "Q" Sentinel
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: User enter values then enters "q" to signal
//they are done entering numbers. Program outputs statistics from values.
//*****************
#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
	//declarations
	string input = " ";
	int value = 0, index = 0, j = 0, lastNum = 0;
	double sum = 0;
	vector <int> numbers;

	//-----------------------------------------------

	//output & input sections
	cout << "Let's average numbers. Enter an integer or Q to quit: ";
	cin >> input;
	cout << endl;

	//computations
	index++;
	value = stoi(input);	//convert string to int
	sum += value;
	numbers.push_back(value);	//add values to vector

	if (input == "Q" or input == "q" )	//input validation
	{
		cout << "Program ending...";
		return 1;
	}

	while (input != "Q" or input != "q")
	{
		//output & input sections
		cout << "Next number or (Q)uit: ";
		cin >> input;
		cout << endl;
		index++;

		if (input == "Q")
			break;

		//computations
		value = stoi(input);
		numbers.push_back(value);
		sum += value;
	}

	sort (numbers.begin(), numbers.end());

	if (input == "Q" or input == "q")
	{
		//output section
		cout << "Average is: " << fixed
			 << setprecision(2) << (sum / (index - 1)) << endl;

		//computations
		for (int i = 0; i < numbers.size(); i++)
			j++;
		lastNum = (j - 1);

		//output sections
		cout << "High is: " << numbers[lastNum] << endl;
		cout << "Low is: " << numbers[0] << endl;
		cout << "Count of values is: " << (index - 1) << endl;
	}

	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}
