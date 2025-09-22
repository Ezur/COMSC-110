//*****************
//Program Name: Lab 2, Part 4
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Calculate and output a retail markup.
//*****************
#include <iostream>
using namespace std;

int main()
{

	//User enters wholesale price:
	double originalPrice;
	cout << "Enter the original price for your item: $";
	cin >> originalPrice;

	//User enters markup percentage:
	double percentage;
	cout << "Enter the markup percentage:" << " %";
	cin >> percentage;

	//Computer converts % to decimal:
	percentage = percentage * .01;
	//Calculate retail price
	double retailPrice = (percentage * originalPrice) + originalPrice;
	cout << "\nYour retail price is $" << retailPrice;


	cout << "\n\nThis code is my original programming work, and I received no help creating it.";

    return 0;
}
