//SORTA PYRAMID

#include <iostream>
using namespace std;

int main() {

	int height = 0;
	char keepgoing = ' ';

	do
	{

	cout << "Input desired height of the pyramid: ";
	cin >> height;
	while (height < 5 or height > 25)
	{
		cout << "ERROR: Height must be between 5-25";
		cout << "\nTry again --> Input desired height: ";
		cin >> height;
	}

	for (int i = 1; i <= height; i++)
	{
		for (int k = 1; k <= i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = height - 1; i >= 1; i--)
		{
			for (int k = 1; k <= i; k++)
			{
				cout << "*";
			}
			cout << endl;
		}

	cout << "Run again? Y/N --> ";
	cin >> keepgoing;
	while (keepgoing != 'Y' and keepgoing != 'N')
	{
		cout << "ERROR: Y or N only --> ";
		cin >> keepgoing;
	}

	}while (keepgoing == 'Y' or keepgoing == 'y');


	return 0;
}
