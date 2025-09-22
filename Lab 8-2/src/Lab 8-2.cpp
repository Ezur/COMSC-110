//*****************
//Program Name: Lab 8-2, People Database
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program creates a people database.
//*****************
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void dataFile(int, string, int, int, int);

ofstream fout("output.txt");

int main()
{
	//declarations
	int n, age, weight, zip, count = 0;
	string name;
	ofstream fout("output.txt");

	//welcome display
	cout << "Welcome to your People Database!";

	//output & input
	cout << "\nHow many people? ";
	cin >> n;

	//computations
	for (int i = 1; i <= n; i++)
	{
		count++;
		cout << "\nPerson #" << count;
		cin.get();

		cout << "\nName: ";
		getline(cin, name);

		cout << "Age: ";
		cin >> age;
		cin.get();

		//IVL
		while (age < 0)
		{
			cout << "\tERROR: Enter only positive values!";
			cout << "\n\tTry again: Enter the Age: ";
			cin >> age;
		}

		cout << "Weight: ";
		cin >> weight;
		cin.get();

		//IVL
		while (weight < 0)
		{
			cout << "\tERROR: Enter only positive values!";
			cout << "\n\tTry again: Enter the Weight: ";
			cin >> weight;
		}

		cout << "Zip code: ";
		cin >> zip;
		while (zip < 0)
		{
			cout << "\tERROR: Enter only positive values!";
			cout << "\n\tTry again: Enter the Zip code: ";
			cin >> zip;
		}

		//function call
		dataFile(i, name, age, weight, zip);
	}

	fout.close();

	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";
    return 0;
}

//dataFile(): Receive's 5 pieces of data, outputs data to console
//and outputs same data to external file (output.txt)
//Inputs: 5 operands (1 string, 4 ints) | Returns: none ()
void dataFile(int i, string name, int age, int weight, int zip)
{
	cout << endl << name << endl
		 << age << " years old" << endl
		 << weight << " lbs" << endl
		 << zip << endl;

	fout << "Person #" << i << ":" << endl;
	fout << name << endl
		 << age << " years old" << endl
		 << weight << " lbs" << endl
		 << zip << endl;

	fout << endl;
	cout << endl;
}
