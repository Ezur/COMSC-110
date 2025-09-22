#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int numbThrows;		//number of dice throws for each round

	//output display
	cout << "*******DICE STATISTICS*******";
	cout << "\n*****************************";

	cout << "\n\nHow many dice throws do you want to do for round #1? --> ";
	cin >> numbThrows;

	//IVL for number of dice throws you want
	while (numbThrows <= 0)
	{
		cout << "\nERROR: Input must be greater than 0";
		cout << "\nTry again: How many dice throws do "
				"you want to do for round #1? -->";
		cin >> numbThrows;
	}

	for (int i = 1; i <= numbThrows; i++)
	{

	}

	cout << "\nStatistics for round #1:";
	cout << "\n\tRoll\tCount\tPercent";
	cout << "\n\t----\t-----\t-------";

	cout << "\n\t2";
	cout << "\n\t3";
	cout << "\n\t4";
	cout << "\n\t5";
	cout << "\n\t6";
	cout << "\n\t7";
	cout << "\n\t8";
	cout << "\n\t9";
	cout << "\n\t10";
	cout << "\n\t11";
	cout << "\n\t12";

    return 0;
}
