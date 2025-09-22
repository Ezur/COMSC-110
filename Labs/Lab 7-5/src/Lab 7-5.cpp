//*****************
//Program Name: Lab 7-5, Fix the Addresses
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program writes the lines from an original
//file to a secondary file with an altered format.
//*****************
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//declarations
	ifstream fin("original.txt");
	ofstream fout("copied.txt");
	int count = 0, total = 0;
	string stringline;

	//loop calculations
	while (getline(fin, stringline))
	{
		count++;
		//cout << stringline << endl;
		fout << stringline << endl;
		if (count == 3)
		{
			total++;
			//cout << "\n";
			fout << "\n";
			count = 0;
		}
	}
	fin.close();
	fout.close();

	//file output
	fout << "Total number of addresses: " << total;

	//goodbye
	cout << "View new output in file \"copied.txt\" -- Program ending.";

	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}
