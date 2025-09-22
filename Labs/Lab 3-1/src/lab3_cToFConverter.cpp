//*****************
//Program Name: Lab 3-1: CtoF Converter
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Converts a Celsius temperature to a Fahrenheit temperature.
//*****************
#include <iostream>
using namespace std;

int main()
{

	//declarations
	int celciusT, fahrenT;

    //input section
	cout << "Input degrees in Celcius (e.g. enter 15 for 15 degrees celcius): ";
	cin >> celciusT;
	cout << endl;

    //computations
	fahrenT = (9.0 / 5.0) * celciusT + 32;

    //output section
	cout << celciusT << " degrees Celcius is converted to " << fahrenT << " degrees Fahrenheit.";

	cout << "\n\nThis code is my original programming work, and I received no help creating it.";

    return 0;
}
