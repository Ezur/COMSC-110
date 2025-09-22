//*****************
//Program Name: Lab 15-2, JobInfo Struct
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program uses a structure to store info about
//different employees
//*****************
#include <iostream>
#include <array>
using namespace std;

//structs
struct JobInfo
{
	string jobdescription;
	string status;	//full time or part time
	int salary;
	string job_type;	//salaried or hourly
};

//constants
const int SIZE = 4;

int main()
{
	//declarations
	int fullTime = 0, partTime = 0, totalSalary = 0;

	array<JobInfo, SIZE> officeStaff = {{
		{"Admin", "Full Time", 75000, "Hourly"},
		{"Manager", "Full Time", 120000, "Salaried"},
		{"Worker I", "Part Time", 60000, "Hourly"},
		{"Worker II", "Full Time", 62000, "Hourly"} }};

//	officeStaff[0] =  (struct JobInfo) {"Admin", "Full Time", 75000, "Hourly"};
//	officeStaff[1] = (struct JobInfo) {"Manager", "Full Time", 120000, "Salaried"};
//	officeStaff[2] = (struct JobInfo) {"Worker I", "Part Time", 60000, "Hourly"};
//	officeStaff[3] = (struct JobInfo) {"Worker II", "Full Time", 62000, "Hourly"};

	for (int i = 0; i < SIZE; i++)
	{
		//output sections
		cout << "Staff Member #" << i+1 << ": " << endl;
		cout << "\t" << officeStaff[i].jobdescription << endl;
		cout << "\t" << officeStaff[i].status << endl;
		cout << "\t" << officeStaff[i].salary << endl;
		cout << "\t" << officeStaff[i].job_type << endl << endl;

		if (officeStaff[i].status == "Full Time")
			fullTime++;
		else
			partTime++;
		totalSalary += officeStaff[i].salary;
	}
	cout << "Number of full-time workers: " << fullTime << endl;
	cout << "Number of part-time workers: " << partTime << endl;
	cout << "Total salary: " << totalSalary;

	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}

