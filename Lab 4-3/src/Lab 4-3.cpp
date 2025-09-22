//*****************
//Program Name: Lab 4-3: Ten Randoms
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: User enters a min and max range and
//outputs 10 random numbers in that range.
//*****************
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    //declarations
	int MIN, MAX;

	//outputs & inputs
	cout << "Enter your min and max, and I'll output ten "
			"random numbers that fall within those ranges.";
	cout << "\n\nEnter minimum random number: ";
	cin >> MIN;
	cout << "Enter maximum random number: ";
	cin >> MAX;
	cout << "Ten random numbers between " << MIN << " and " << MAX << " inclusive: " << endl;

	//random # calculations
	srand(time(0));
	for (int i =1; i <= 10; i++)
	{
		cout << rand() % (MAX - MIN + 1) + MIN;
		if (i % 1 == 0)
			cout << endl;
	}

	//plagiarism statement
	cout << "\nThis code is my original programming work, and I received no help creating it.";

    return 0;
}
