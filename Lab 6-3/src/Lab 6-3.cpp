//*****************
//Program Name: Lab 6-3, Account For This
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: A monthly budget is analyzed to determine if
//transaction totals to over/under budget.
//*****************
#include <iostream>
using namespace std;

int main()
{
	//declarations
	int budget;
	int transaction;	//number of transactions
	double number;		//amount of money
	double sum = 0;

	//output & input sections
	cout << "Monthly budget? --> ";
	cin >> budget;
	cout << "Number of transactions to record? --> ";
	cin >> transaction;
	cout << "Please enter transaction:\n";

	//computations
	for (int i = 1; i <= transaction; i++)	//i = transaction number
	{
		cout << "#" << i << "--> ";
		cin >> number;
		sum += number;
	}

	//output sections
	cout << "Budget: " << budget << endl;
	cout << "Total spending: " << sum << endl;

	//computations
	if (sum < budget)
		cout << "Under budget";
	else
		cout << "Over budget";

	//plagiarism statement
		cout << "\n\nThis code is my original programming work,"
				" and I received no help creating it.";

	return 0;
}
