//*****************
//Program Name: Pop Quiz
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Triple-nested for loop to generate pattern.
//*****************
#include <iostream>
using namespace std;

const int SIZE = 3;

int main()
{

	for (int rows = 1; rows <= SIZE; rows++)		//print x 3 times
	{
		for (int column = 1; column <= SIZE; column++)		//each row 3x
		{
			for (int i = 1; i <= SIZE; i++)		//prints block 3 time
			{
			cout << "X ";
			}

			cout << endl;
		}
		cout << endl;
	}



	//plagiarism statement
	cout << "This code is my original programming work,"
			" and I received no help creating it.";

	return 0;

}
