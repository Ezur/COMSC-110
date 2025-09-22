//*****************
//Program Name: Lab 4-5: Rectangle Areas
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Calculates the area of two rectangles and outputs the greater area.
//*****************
#include <iostream>
using namespace std;

int main()
{
	//declarations
    double lengthOne, widthOne, lengthTwo, widthTwo;

    //output section
	cout << "Enter the dimensions of 2 rectangles, and I'll "
    		"calculate which one has the greater area. ";

	//output & input section
    cout << "\n\nRECTANGLE ONE: " << endl << "Length: ";		//Rectangle One
    cin >> lengthOne;
    cout << "Width: ";
    cin >> widthOne;

    //output & input section
    cout << "\nRECTANGLE TWO: " << endl << "Length: ";		//Rectangle Two
    cin >> lengthTwo;
    cout << "Width: ";
	cin >> widthTwo;

	//calculations
	double area = lengthOne * widthOne;
	double area2 = lengthTwo * widthTwo;

	//output section
	if (area > area2)
		cout << "\nResults: Rectangle 1 has the greater area: "
				<< area << " vs. " << area2;
	else
		cout << "\nResults: Rectangle 2 has the greater area: "
				<< area2 << " vs. " << area;

	//plagiarism statement
	cout << "\n\nThis code is my original programming work, "
			"and I received no help creating it.";

    return 0;
}
