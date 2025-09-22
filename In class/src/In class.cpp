
//const int MAX = 50, MIN = 10;
//
//int evensOnly()
//{
//	int count;
//	int randNum = rand() % (MAX - MIN + 1) + MIN;
//
//	while (randNum % 2 == 0)
//	{
//		count++		//increments each time a # is even
//		cout << randNum << endl;		//lists each even #
//	}
//
//}



//*****************
//Program Name: Program 1
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: one-sentence summary of what your program does
//*****************
#include <iostream>
using namespace std;

int evensOnly();


int main()
{
	int even;

    even = evensOnly();

    return 0;
}




int evensOnly()
{
	const int MAX = 50, MIN = 10;

	int randNum = rand() % (MAX - MIN + 1) + MIN;

	if (randNum % 2 == 0)
	{
		cout << randNum << endl;		//lists each even #
	}

	return randNum;

}
