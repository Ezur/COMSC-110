//TRIPLE NESTED LOOP

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << endl;
			for (int k = 0; k < 10; k++)
			{
				cout << i << j << k << " ";
			}
		}
	}

	return 0;
}
