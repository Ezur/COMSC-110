//*****************
//Program Name: Lab 8-3, Area with Functions
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program asks user for a length
//and width of a rectangle then display it's area.
//*****************
#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
double getLength(double);
double getWidth(double);
double getArea(double, double);
void displayData(double, double, double);
void welcome();

const int W1 = 5;

int main()
{
    //housekeeping and declarations
    double length;    //holds the rectangle's length
    double width;     //holds the rectangle's width
    double area;      //holds the rectangle's area
    welcome();

    //input and calculations
    length = getLength(length);          //obtains length
    width = getWidth(width);            //obtains width
    area = getArea(length, width); //calculates area

    //output results
    displayData(length, width, area);

    return 0;
}

//getLength(): Asks user to input rectangle length, returns double
//Inputs: 1 operand (1 double) | Returns: 1 operand (double)
double getLength(double length)
{
	cout << "\n1)Enter the rectangle's length: ";
	cin >> length;
	while (length <= 0)
	{
		cout << "\tERROR! Enter a value above 0!";
		cout << "\n\tTry again --> Enter the rectangle's length: ";
		cin >> length;
	}
	return length;
}

//getWidth(): Asks user to input rectangle width, returns double
//Inputs: 1 operand (1 double) | Returns: 1 operand (double)
double getWidth(double width)
{
	cout << "2)Enter the rectangle's width: ";
	cin >> width;
	while (width <= 0)
	{
		cout << "\tERROR! Enter a value above 0!";
		cout << "\n\tTry again --> Enter the rectangle's width: ";
		cin >> width;
	}
	return width;
}

//getArea(): Receives length & width, calculates area, & returns area
//Inputs: 2 operand (doubles) | Returns: 1 operand (double)
double getArea(double l, double w)
{
	return l * w;
}

//displayData(): Receives length, width, & area, displays the results
//Inputs: 3 operands (doubles) | Returns: none
void displayData(double l, double w, double a)
{
	cout << "\n\t***RESULTS***";
	cout << "\n   Input values: ";
	//cout << "\n   ------------";
	cout << "\n\t\tLength:" << setw(W1-1) << l;
	cout << "\n\t\tWidth:" << setw(W1) << w;

	cout << "\n   Calculated values: ";
	//cout << "\n   -----------------";
	cout << "\n\t\tArea:" << setw(W1+1) << a;
}

//welcome(): Displays welcome instructions,
//waits for user to press ENTER to begin.
//Inputs: none | Returns: none
void welcome()
{
	cout << "***Rectangle Area Calculator***";
	cout << "\n   ------------------------";
	cout << "\n   Press ENTER to start-->";
	cin.get();
	cout << "\n(Value must be above 0)";
}


