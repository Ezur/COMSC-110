//*****************
//Program Name: Lab 8-1, Wholesale Mark-up
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program asks user to input wholesale price
//and markup percent and outputs the retail price.
//*****************
#include <iostream>
#include <iomanip>
using namespace std;

void calculateRetail(double, double);

int main()
{
	//declaration
	double wholesaleP, markupRate;

	//welcome display
	cout << "***RETAIL CALCULATOR***" << endl;
	cout << "\nEnter the item's wholesale price "
			"(enter a positive value): $";
	cin >> wholesaleP;

	//IVL statements
	while (wholesaleP < 0)			//IVL for only pos #s
	{
		cout << "\t!!Enter ONLY positive values!!\n";
		cout << "\tTry again: Enter Wholesale price: $";
		cin >> wholesaleP;
	}
	cout << "Enter the item's markup percentage"
			" (e.g. enter 50 for 50%): ";
	cin >> markupRate;

	while (markupRate < 0) 			//IVL for only pos #s
	{
		cout << "\t!!Enter ONLY positive values!!\n";
		cout << "\tTry again: Enter Markup Percentage"
				" (remember, enter 50 for 50%): ";
		cin >> markupRate;
	}
	cout << fixed << setprecision(2);
	calculateRetail(wholesaleP , markupRate);

	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";
    return 0;
}

//calculateRetail(): Receives the wholesale cost and mark-up percent.
// Calculates and displays the retail price.
//Inputs: 2 operands (doubles) | Returns: product (double)
void calculateRetail(double w, double m)
{
	double retailP;
	retailP = w + ((w * m) / 100);

	cout << "\n\tWholesale price: $" << fixed << setprecision(2) << w;
	cout << ", markup percentage: " << setprecision(0) << m;
	cout << "%, retail price: $" << fixed << setprecision(2) << retailP;
}
