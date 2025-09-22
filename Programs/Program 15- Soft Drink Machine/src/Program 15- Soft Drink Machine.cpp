//*****************
//Program Name: Program 15, Soft Drink Machine
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program simulates a soft drink
//machine's operations. Using an array of structs and functions.
//*****************
#include <iostream>
#include <fstream>
#include <array>
#include <cctype>
#include <iomanip>
using namespace std;

//structs
struct Drink
{
	string name;
	string cost;
	int inventory;
};

//constants
const int SIZE = 5;

//function prototypes
void loadInventory(array<Drink, SIZE> &);
void displayInventory(array<Drink, SIZE>);
void bubbleSort(array<Drink, SIZE> &);
void swap(int &, int &);
void restock_drink(array<Drink, SIZE> &, int);


int main()
{
	//declarations
	int menu_choice = 0, drink_choice = 0,
		restock_choice = 0, sum = 0;
	array<Drink, SIZE> machine;

	loadInventory(machine);	//populate array
	bubbleSort(machine);	//sort array

	for (int i = 0; i < SIZE; i++)
		sum += (machine[i].inventory);	//sum computations

	do
	{
		//output & input sections
		cout << "Enter:" << endl;
		cout << "\t1 - Display inventory levels" << endl;
		cout << "\t2 - Purchase drink" << endl;
		cout << "\t3 - Restock" << endl;
		cout << "\t4 - Quit" << endl;
		cout << "\n\n\tChoice --> ";
		cin >> menu_choice;

		//input validation
		while (menu_choice < 1 or menu_choice > 4 or cin.fail())
		{
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(1000, '\n');
			}
			cout << "ERROR: Input choice 1-4: ";
			cin >> menu_choice;
		}

		//switch stmt
		switch(menu_choice)
		{
			case 1:	//DISPLAY INVENTORY
			{
				//output sections
				cout << endl;
				displayInventory(machine);	//display array
				break;
			}

			case 2:	//PURCHASE DRINK
			{
				//output sections
				cout << endl << "Select drink to purchase:" << endl;	//drink submenu
				for (int i = 0; i < SIZE; i++)
				{
					if (machine[i].inventory == 0)
						continue;
					cout << "\t" << i+1 << ": " << machine[i].name << endl;
				}
				cout << "\t" << "6: cancel" << endl;
				cout << "\n\t" << "Choice --> ";
				cin >> drink_choice;

				if (drink_choice == 6)	//cancel stmt
					break;

				//IVD
				while (drink_choice < 0 or drink_choice > 7 or cin.fail()
					   or machine[drink_choice - 1].inventory == 0)
				{
					if (cin.fail())
					{
						cin.clear();
						cin.ignore(1000, '\n');
					}
					cout << "\n\t> ERROR: select a valid input option"
							" 1-6 or NOT SOLD OUT: ";
					cin >> drink_choice;

					if (drink_choice == 6)	//cancel stmt
						break;
				}
				if (drink_choice == 6)	//cancel stmt
					break;

				//computations
				machine[drink_choice - 1].inventory--;	//decrements inventory of drink
				sum--;

				cout << endl << "\t" << "New on-hand amount for "
					 << machine[drink_choice - 1].name << ": "
					 << machine[drink_choice - 1].inventory << endl;

				if (sum == 0)
					cout << "\tENTIRE MACHINE IS SOLD OUT!" << endl;

				break;
			}

			case 3:	//RESTOCK
			{
				//output & input sections
				cout << "\nSelect drink to restock:" << endl;
				for (int i = 0; i < SIZE; i++)
					cout << "\t" << i+1 << ": " << machine[i].name << endl;
				cout << "\t" << "6: cancel" << endl;
				cout << "\n\t" << "Choice --> ";
				cin >> restock_choice;

				//IVD
				while (restock_choice < 1 or restock_choice > 6 or cin.fail())
				{
					if (cin.fail())
					{
						cin.clear();
						cin.ignore(1000, '\n');
					}
					cout << "ERROR: Please enter valid input, 1-6: ";
					cin >> restock_choice;
				}
				if (restock_choice == 6)
					break;

				restock_drink(machine, restock_choice);

				break;
			}

			default:	break;
		}

	}
	while (menu_choice != 4);
		cout << endl << "Program ended.";


	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}

//loadInventory(): Reads from a file to populate array
//Inputs: array of struct Drink | Returns: none
void loadInventory(array<Drink, SIZE> &m)
{
	ifstream fin("drink_stock.txt");

	for (int i = 0; i < SIZE; i++)
	{
		getline(fin, m[i].name);
		getline(fin, m[i].cost);
		fin >> m[i].inventory;
		fin.ignore();
	}
	fin.close();
}

//displayInventory(): Function displays the current inventory of drinks
//Inputs: array of struct Drink | Returns: none
void displayInventory(array<Drink, SIZE> m)
{
	cout << "************************" << endl;
	cout << "Soda machine inventory:" << endl;
	cout << "************************" << endl;
	cout << "Drink" << setw(26) << "Cost" << setw(21) << "On Hand" << endl;
	cout << "-----" << setw(26) << "----" << setw(21) << "-------" << endl;

	for (int i = 0; i < SIZE; i++)
		cout << left << setfill(' ') << setw(11) << m[i].name
			 << right << setw(20) << m[i].cost
			 << right << setw(18) << m[i].inventory << endl;
	cout << endl;
}

//bubblesSort(): Bubble Sort function to set drink names in
//asccending order
//Inputs: array of struct Drink | Returns: none
void bubbleSort(array<Drink, SIZE> &d)
{
    for (int maxElement = SIZE - 1; maxElement > 0; maxElement--)
        for (int index = 0; index < maxElement; index++)
            if (d[index].name > d[index + 1].name)
                swap(d[index], d[index + 1]);
}

//swap(): Uses a temporary var to switch values btwn 2 variables
//Inputs: 2 reference values (ints) | Returns: none
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

//restock_drink(): User enters the drink they wish to restock and
//program increments inventory by number user inputs.
//Inputs: array of struct Drink, 1 int | Returns: none
void restock_drink(array <Drink, SIZE> &machine_array, int restock_choice)
{
	int amount_restock = 0;

	cout << "\tEnter number of drinks to restock: ";
	cin >> amount_restock;

	//IPV
	while (amount_restock < 1 or cin.fail())
	{
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(1000, '\n');
		}
		cout << "\t> ERROR: Enter at least 1 drink to restock: ";
		cin >> amount_restock;
	}

	for (int i = 0; i < amount_restock; i++)
		machine_array[restock_choice - 1].inventory++;	//increments inventory of drink

	cout << "\t" << "New on-hand amount for "
		 << machine_array[restock_choice - 1].name << ": "
		 << machine_array[restock_choice - 1].inventory << endl;
}






