//*****************
//Program Name: Lab 10-4, How Many in That Database?
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Using legacy arrays to input random values
//into a file. Then use that information to
//read the contents into an array.
//*****************
#include <iostream>
#include <fstream>
#include <array>
#include <ctime>
using namespace std;

const int MAX = 40, MIN = 30;
const int MAXV = 1000, MINV = 1;

int main()
{
	//declarations
	srand(time(0));
	ofstream fout("numbers.txt");
	ifstream fin("numbers.txt");
	int randNums = 0, number = 0, count = 0;
	int value[randNums];
	int maxvalue = MINV, minvalue = MAXV;
	randNums = rand() % (MAX - MIN + 1) + MIN;

	//file output and computation sections
	for (int i = 0; i < randNums; i++)
	{
		number = rand() % (MAXV - MINV + 1) + MINV;
		fout << number << endl;
		count++;
		if (number > maxvalue) maxvalue = number;
		if (number < minvalue) minvalue = number;

	}

	//read values
	while (fin >> value[randNums]);

	fin.close();
	fout.close();

	//output sections
	cout << count << " number of elements.";
	cout << "\nMax value: " << maxvalue << endl;
	cout << "Min value: " << minvalue << endl;

	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}
