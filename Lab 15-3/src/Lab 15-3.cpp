//*****************
//Program Name: Lab 15-3, MovieData Struct
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program prints out information about movies
//accessed from a file, using structs in functions.
//*****************
#include <iostream>
#include <fstream>
#include <array>
using namespace std;

//structs
struct MovieData
{
	string title;
	string director;
	int year_released;
	int running_time;
	int production_cost;
	int first_year_rev;
};

//function prototypes
MovieData populateMovie(ifstream &);
void displayMovie(MovieData);

int main()
{
	//declarations
	ifstream fin("moviedata.txt");

	MovieData movie1 = populateMovie(fin);
	MovieData movie2 = populateMovie(fin);
	fin.close();

	displayMovie(movie1);
    displayMovie(movie2);

	//plagiarism statement
	cout << "\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}
//populateMovie(): Receives members from file and
//populates temporary struct
//Inputs: file input fin | Returns: reference struct
MovieData populateMovie(ifstream &fin)
{
	MovieData temp;

	getline(fin, temp.title);
	getline(fin, temp.director);

	fin >> temp.year_released;
	fin >> temp.running_time;
	fin >> temp.production_cost;
	fin >> temp.first_year_rev;

	fin.ignore();

	return temp;
}

//displayMovie(): Function outputs the struct by accessing the members
//Inputs: struct | Returns: none
void displayMovie(MovieData m)
{
	cout << "Movie data:" << endl;
	cout << "\t> Title: " << m.title << endl;
	cout << "\t> Director: " << m.director << endl;
	cout << "\t> Year released: " << m.year_released << endl;
	cout << "\t> Length: " << m.running_time << endl;
	cout << "\t> Production costs: $" << m.production_cost << endl;
	cout << "\t> First year revenue: $" << m.first_year_rev << endl;
}


