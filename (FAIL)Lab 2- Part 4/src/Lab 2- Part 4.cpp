//Write a program that will calculate a retail markup. Have the user enter two pieces of data:
//The wholesale price (the original price)
//The markup percentage, such as 15% or 25%
//Then calculate and output the retail price, which is the wholesale price plus the markup. The markup is the price times the percentage.


//*****************
//Program Name: Part 4
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Calculate a retail markup.
//*****************

#include <iostream>
using namespace std;

int main()
{
    //User enters the wholesale price
	double wholesaleP;
	cout << "Enter the original price for your item: $";
	cin >> wholesaleP;

	//User enters the markup percentage
	double markupPercent;
	cout << "Enter the markup percentage (exclude the % symbol): ";
	cin >> markupPercent;
	markupPercent = markupPercent * .01;

	//calculate the markup
	//(markup = price * %)
	double markup = wholesaleP * markupPercent;
	//cin >> markup;

	//Program will calculate & output retail price
	//(retail price = wholesale price + the markup)
	double retailP = wholesaleP + markup;
	//cin >> retailP;
	cout << "\nYour retail price is $" << retailP;




	//cout << "This code is my original programming work, and I received no help creating it.";

    return 0;
}
