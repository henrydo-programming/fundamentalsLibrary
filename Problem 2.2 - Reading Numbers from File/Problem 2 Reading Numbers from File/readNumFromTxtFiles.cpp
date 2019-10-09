//Project Name:							Problem 2: Reading Numbers from File (40 points)
//Project Description:					Reads the numbers from a file called Numbers.txt, found in the zip file. 
//										counts and sums all negative numbers and separately all positive numbers  (zero is considered positive)
//										then displays the final count and sum for these numbers.
//Programmer Name:						Henry Do
//Date:									October 8, 2019

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inputFile;					// needed to use files
	int number;

	int numAllValues = 0;				// keeps track of the number of values read in entire file so far
	int numNegValues = 0;				// keeps track of the number of negative values read so far
	int numPosValues = 0;				// keeps track of the number  of positive values read so far 
	double value = 0.0;					// single value read
	double negValues = 0.0;				// sum of negative values 
	double posValues = 0.0;				// sum of positive values
	
	// open the input file
	inputFile.open("C:\\Users\\henry\\OneDrive\\Desktop\\Numbers.txt");		//access the file through pre-determined path -- feel free to change, but copy new path
	cout << "Processing file -- please wait" << endl;						//displays text to confirm file opened

	// reads and displays values in the file (EOF)
	while (inputFile >> value)					// if a value was read, execute the loop again to count the value 
		{
			numAllValues++;								 
			if (value < 0)						// if the value is negative increase the negative number count and adds to the current sum of negative values
			{
				numNegValues++;					// counts the neagtive number
				negValues += value;				// adds the idenfified negative value to the current sum of negative values
			}
			else								// The value is assumed to be positive. Increase the positive number count and adds to the current sum of positive values
			{
				numPosValues++;					//counts the positive number
				posValues += value;				// adds the idenfified positive value to the current sum of positive values
			}
		}

	// displays finals count and sum for positive and negative values
	cout << "Negative count: " << numNegValues << endl;
	cout << "Negative sum: " << negValues << endl;
	cout << "Positive count: " << numPosValues << endl;
	cout << "Positive sum: " << posValues << endl;

	//close the file
	inputFile.close();
	return 0;












}