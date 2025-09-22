//*****************
//Program Name: Program 12, Sorting Visualization
//Author: Elise Zur
//IDE Used: Eclipse
//Program description: Program will compare the bubble & select
//sorting algorithms.
//*****************
#include <iostream>
#include <array>
#include <ctime>
#include <iomanip>
using namespace std;

//constant variables
const int SIZE = 8, MAX = 99, MIN = 10,
		  W1 = 5, W2 = 11;

//function prototypes
int bubbleSort(array<int, SIZE> &);
int selectSort(array<int, SIZE> &);
void swap(double &, int &);
void populateArray(array<int, SIZE> &);

int main()
{
	//declarations
	srand(time(0));
	int bubbleSwaps = 0, selectSwaps = 0;
	array<int, SIZE> randomArray = {0};
	array<int, SIZE> copiedArray;

	//-----------------------------------------------

	//function calls
	populateArray(randomArray);
	copiedArray = randomArray;

	//output sections
	cout << "\nBubble Sort of this array:\n";

	cout << setw(W1);
	for (int val : randomArray)
		cout << val << " ";
	cout << endl;

	cout << "Sorting visualization: " << endl;

	//function call
	bubbleSwaps = bubbleSort(randomArray);

	//output sections
	cout << "\nSelect Sort of this array:\n";

	cout << setw(W1);
	for (int val : copiedArray)
		cout << val << " ";
	cout << endl;

	cout << "Sorting visualization: " << endl;

	//function call
	selectSwaps = selectSort(copiedArray);

	//output sections
	cout << "\nNumber of exchanges:";
	cout << setw(W2) << endl << "Bubble: " << bubbleSwaps;
	cout << setw(W2) << endl << "Select: " << selectSwaps;

	//plagiarism statement
	cout << "\n\nThis code is my original programming work,"
			" and I received no help creating it.";

    return 0;
}

//bubbleSort(): Use Bubble Sort technique to sort & output values
//Inputs: randomArray (ints) | Returns: countSwaps (int)
int bubbleSort(array<int, SIZE> &arr)
{
	int countSwaps = 0;
	for (int maxElement = SIZE - 1; maxElement > 0; maxElement--)
		for (int index = 0; index < maxElement; index++)
			if (arr[index] > arr[index + 1])
			{
				swap(arr[index], arr[index + 1]);
				cout << setw(W1);
				for (int val : arr)
					cout << val << " ";		//bubble sort visualization
				countSwaps++;
				cout << endl;
			}
	return countSwaps;
}

//selectSort(): Use Select Sort technique to sort & output values
//Inputs: copiedArray (ints) | Returns: countSwaps (int)
int selectSort(array<int, SIZE> &arr)
{
    int minIndex, minValue, countSwaps = 0;
    for (int start = 0; start < SIZE -1; start++)
    {
        minIndex = start;
        minValue = arr[start];
        for (int index = start + 1; index < SIZE; index++)
        {
            if (arr[index] < minValue)
            {
                minValue = arr[index];
                minIndex = index;
            }
        }
        swap(arr[minIndex], arr[start]);
		cout << setw(W1);
        for (auto val : arr)
			cout << val << " ";		//bubble sort visualization
        countSwaps++;
        cout << endl;
    }
    return countSwaps;
}

//swap(): swaps the values of variable a & b
//Inputs: 2 variables (ints) | Returns: none
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

//populateArray(): populate array with random values between MAX & MIN
//Inputs: array (ints) | Returns: none
void populateArray(array<int, SIZE> &arr)
{
	int i = 0;
	for (auto val : arr)
	{
		int randNum = rand() % (MAX - MIN + 1) + MIN;
		arr[i++] = randNum;
	}
}
