//Neighbour-Finding in a Two-Dimensional Array
#include <iostream>
#include <iomanip>
using namespace std;

//generates a 3x3 array
const int NUM_COLS = 3;							// Number of columns
const int NUM_ROWS = 3;							// Number of rows
void showArray(const int[][NUM_COLS], int);

// declares function showArray()
void showArray(int const array[][NUM_COLS], int numRows)		//declares void type function that takes two arguments
{
	for (int row = 0; row < numRows; row++)						//loop counter for rows index
	{
		for (int col = 0; col < NUM_COLS; col++)				//loop counter for column index
		{
			cout << setw(5) << array[row][col] << " ";
		}
		cout << endl;
	}
}

//This is where the program starts.
int main()
{
	int table[NUM_ROWS][NUM_COLS] = { 	{2, 1, 1},
						{1, 1, 0},
						{0, 1, 1} };  		// 2D array with 3 rows & 3 columns
	showArray(table, NUM_ROWS);

	return 0;
}
