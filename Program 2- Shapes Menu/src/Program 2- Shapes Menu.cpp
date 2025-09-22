//*****************
//Program Name: Program 2, Shapes Menu
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Displays a menu to the user with various
//calculations options for various shapes.
//*****************
#include <iostream>
using namespace std;

int main()
{
	//declarations
    char choice;
    double circleRad,
		   circleArea;
    double rectWidth,
		   rectLength,
		   rectangleArea;
	double triBase,
		   triHeight,
		   triangleArea;

	//output & input sections
    cout << "***Geometry Calculator***"
        		"\nEnter: ";
    cout << "\n1: Calculate the area of a circle"
    		"\n2: Calculate the area of a rectangle"
    		"\n3: Calculate the area of a triangle"
    		"\n4: Quit"
    		"\n\nEnter your choice (1-4) --> ";
    cin >> choice;

    //computations
    switch(choice)
    {
    case '1':
    		   //output & input sections
    		   cout << "***You've selected: CIRCLE***"
    			   << "\nEnter the circle's radius --> ";
			   cin >> circleRad;

			   //if-computations
			   if (circleRad < 0)
			   {
				   cout << "**ERROR: Dimensions must "
						   "be a positive value. "
						   "Run the program again if desired.";
				   return 0;
			   }

			   //computations & output sections
			   circleArea = M_PI * (circleRad * circleRad);
			   cout << "With radius (" << circleRad << ")"
					   " the circle's area is " << circleArea;
    	break;

    case '2':
    		  //output & input sections
    		  cout << "***You've selected: RECTANGLE***";
    		  cout << "\nEnter the rectangle's WIDTH --> ";
    		   cin >> rectWidth;
    		  cout << "Enter the rectangle's LENGTH --> ";
			   cin >> rectLength;

			   //if-computations
			   if (rectWidth < 0 or rectLength < 0)
			   {
				   cout << "**ERROR: Dimensions must "
						   "be a positive value. "
						   "Run the program again if desired.";
				   return 0;
			   }

			   //computations & output sections
			   rectangleArea = rectWidth * rectLength;
			   cout << "With the width (" << rectWidth <<
					   ") and length (" << rectLength << "),"
					   "the rectangle's area is " << rectangleArea;
        	break;

    case '3':
    		  //output & input sections
    		  cout << "***You've selected: TRIANGLE***";
    		  cout << "\nEnter the triangle's base --> ";
    		   cin >> triBase;
    		  cout << "Enter the triangle's height --> ";
    		   cin >> triHeight;

			   //if-computations
    		   if (triBase < 0 or triHeight < 0)
			   {
				   cout << "**ERROR: Dimensions must "
						   "be a positive value. "
						   "Run the program again if desired.";
				   return 0;
			   }

			   //computations & output sections
    		   triangleArea = .5 * (triBase * triHeight);
    		   cout << "With the base (" << triBase << ")"
    				   " and height (" << triHeight << "), "
    				   "the triangle's area is " << triangleArea;
        	break;

    case '4': cout << "4: Quit";
        	break;

    default: cout << "**ERROR: Must enter a positive value."
    				 " Run the program again if desired.";
    }

	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}
