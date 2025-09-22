//*****************
//Program Name: Lab 3-2: Area of Trapezoid
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Calculates and outputs the area of a trapezoid.
//*****************
#include <iostream>
using namespace std;

int main()
{

	//declarations
	double height, lengthTop, lengthBottom, area;

    //input section
	cout << "Input the height of the trapezoid: ";
	cin >> height;

	cout << "Input the length of the top base of the trapezoid: ";
	cin >> lengthTop;

	cout << "Input the length of the bottom base of the trapezoid: ";
	cin >> lengthBottom;

	//computations
	area = (height) * ((lengthTop + lengthBottom) / 2);

	//output section
	cout << "\nThe calculated area of the trapezoid is " << area;

	//plagiarism statement
	cout << "\n\nThis code is my original programming work, and I received no help creating it.";

    return 0;
}

