//*****************
//Program Name: Lab 15-1, HouseData Struct
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program processes and prints two structs
//using their elements
//*****************
#include <iostream>
using namespace std;

//structs
struct HouseData
{
	string type;
	string color;
	int year_built;
	int bedrooms;
	double bathrooms;
	double purchase_price;
};

//function prototypes
void print(HouseData, int &);

int main()
{
	//declarations
	HouseData house1, house2;
	int i = 0;

	house1.type = "Traditional";
	house1.color = "Blue";
	house1.year_built = 1920;
	house1.bedrooms = 4;
	house1.bathrooms = 3.5;
	house1.purchase_price = 750000;

	house2.type = "Craftsman";
	house2.color = "Beige";
	house2.year_built = 1945;
	house2.bedrooms = 3;
	house2.bathrooms = 1.5;
	house2.purchase_price = 650000;

	//output sections
	print(house1, i);
	i++;
	print(house2, i);

	//plagiarism statement
	cout << "This code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}

//print(): Function outputs the structs by accessing the elements
//Inputs: struct, int i | Returns: none
void print(HouseData h, int &i)
{
//	for (int i = 0; i < 1; i++)
	cout << "Data for House #" << (i + 1) << ": " << endl;

	cout << "\t> Type: " << h.type << endl;
	cout << "\t> Color: " << h.color << endl;
	cout << "\t> Year built: " << h.year_built << endl;
	cout << "\t> Bedrooms: " << h.bedrooms << endl;
	cout << "\t> Bathrooms: " << h.bathrooms << endl;
	cout << "\t> Purchase price: " << h.purchase_price << endl;
	cout << endl;
}

