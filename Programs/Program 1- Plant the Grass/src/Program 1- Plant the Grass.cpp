//*****************
//Program Name: Program 1: Plant the Grass
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Calculates and determines how much grass seed to buy.
//*****************
#include <iostream>
using namespace std;

int main()
{

//welcome and instructions
cout << "~*~ Grass Seed Calculator ~*~";

//declaration
double numbLawns, lengthLawn, widthLawn;

//input
cout << "\nNumber of lawns in the complex: ";
cin >> numbLawns;

cout << "Average length of lawn in meters: ";
cin >> lengthLawn;

cout << "Average width of lawn in meters: ";
cin >> widthLawn;

//output section
cout << "You entered " << numbLawns << " total lawns in the complex." << endl;
cout << "You entered an average lawn length of " << lengthLawn << " meters." << endl;
cout << "You entered an average lawn width of " << widthLawn << " meters." << endl;

//processing computations
double area = (lengthLawn * widthLawn) * numbLawns;
cout << "Your total lawn area is " << area << " square meters." << endl;

double numbBags = area / 100;
cout << "You'll need to buy " << numbBags << " bags of grass seed.";


//cout << "This code is my original programming work, and I received no help creating it.";

    return 0;
}
