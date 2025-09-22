//*****************
//Program Name: Lab 4-4: Five Sentences
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Converts 5 sentences into a paragraph.
//*****************
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declarations
    string firstSent, secondSent, thirdSent, fourthSent, fifthSent;

    //output & input sections
    cout << "This program will take your five "
    		"sentences and create a paragraph.";
    cout << "\nEnter first sentence: ";
    getline(cin, firstSent);
    cout << "Enter second sentence: ";
    getline(cin, secondSent);
    cout << "Enter third sentence: ";
    getline(cin, thirdSent);
    cout << "Enter fourth sentence: ";
    getline(cin, fourthSent);
    cout << "Enter fifth sentence: ";
    getline(cin, fifthSent);
    cout << "\nHere is your paragraph: ";

    //computations
    string paragraph = firstSent + ' ' + secondSent
    		+ ' ' + thirdSent + ' ' + fourthSent
			+ ' ' + fifthSent + ' ';
    cout << paragraph;

	//plagiarism statement
	cout << "\n\nThis code is my original programming work, and I received no help creating it.";

    return 0;
}
