//*****************
//Program Name: Lab 2, Part 2
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Calculate and output the sales tax on an item.
//*****************

#include <iostream>
using namespace std;

int main()
{

	int itemCost;
	cout << "Enter price of item (exclude dollar sign): ";
	cin >> itemCost;
	cout << "The item costs $" << + itemCost << endl;

	double salesTax = 0.075;
	cout << "The sales tax is 7.5% " << endl;

	double tax = (itemCost * salesTax);

	double priceAfterTax = (itemCost + tax);

	cout << "The final price including sales tax is $" << + priceAfterTax << endl << endl;

	cout << "This code is my original programming work, and I received no help creating it.";

	return 0;
}
