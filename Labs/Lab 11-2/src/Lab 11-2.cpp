//*****************
//Program Name: Lab 11-2, RBFL w/Vector
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Populate vector w/10 random values.
//Print the vector and perform 2 operations.
//(1) Delete index/value from vector.
//(2) Insert index/value into vector.
//*****************
#include <iostream>
#include <vector>
#include <ctime>
#include <iomanip>
using namespace std;

//constants
const int MIN = 0, MAX = 999,
		  W1 = 3;

//function prototype
void printVector(vector<int>);

int main()
{
	//declarations
	srand(time(0));
	int number = 0, input = 0, newInput = 0;
	vector<int> values;

	//random # computations
	for (int i = 0; i < 10; i++)
	{
		number = rand() % (MAX - MIN + 1) + MIN;
		values.push_back(number);
	}

	//output/input sections & function calls
	printVector(values);
	cout << "\n\tWhich index # do you want to delete? >";
	cin >> input;
	values.erase(values.begin() + input);
	printVector(values);

	cout << "\n\tAt which index # do you want to insert a new value? >";
	cin >> input;
	cout << "\tEnter the new value >";
	cin >> newInput;
	values.insert(values.begin()+input, newInput);
	printVector(values);

	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}

//ADD COMMENT FOR FUNCTION???
void printVector(vector<int> v)
{
	cout << "\nVector currently is:\n";

	for (int i = 0; i < v.size(); i++)	//output the index #
		cout << setw(W1) << i << " | ";
	cout << endl;

	for (int j = 0; j < v.size(); j++)	//output divisor line
		cout << "------";
	cout << endl;

	for (auto val : v)	//output value at each index
		cout << setw(W1) << val << " | ";
	cout << endl;
}




