//*****************
//Program Name: Lab 2, Part 3
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Calculate and output miles per gallon.
//*****************
#include <iostream>
using namespace std;

int main()
{
    //user inputs how many miles driven
	double milesDriven;
	cout << "Enter the number of miles you drove: ";
	cin >> milesDriven;

	//user inputs how many gallons of fuel used
	double gallonsUsed;
	cout << "Enter the number of gallons of fuel you used to drive that distance: ";
	cin >> gallonsUsed;

	//program calculates & displays the miles per gallon
	double mpg = milesDriven / gallonsUsed;
	cout << "\nDuring your most recent trip, you estimated " << mpg << " miles per gallon." << endl << endl;


	cout << "This code is my original programming work, and I received no help creating it.";

    return 0;
}

