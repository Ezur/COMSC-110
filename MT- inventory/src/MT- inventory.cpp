//INVENTORY

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin("input.txt");

	string stringline;

	while (!fin)
	{
		cout << "Input file error";
		return 1;
	}

	cout << "***PARTS INVENTORY***";
	cout << "\n\nPart Number\tDescription";
	cout << "\n-----------\t-----------";

	while (getline(fin, stringline))
	{
		cout << endl << stringline << "\t";
		getline(fin, stringline);
		cout << stringline << endl;
	}

	fin.close();

	return 0;
}
