#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int firstNumber, secondNumber, thirdNumber;
	unsigned seed;
	cout << "Hello, this program will generate a set of random numbers. To begin, enter an integer value and press enter = ";
	cin >> seed;
	srand(seed);

	firstNumber = rand() % 20 + 1;
	secondNumber = rand() % 20 + 1;
	thirdNumber = rand() % 20 + 1;

	cout << "First number = " << firstNumber << endl;
	cout << "Second number = " << secondNumber << endl;
	cout << "Third Number = " << thirdNumber << endl;
	cout << firstNumber << " + " << secondNumber << " + " << thirdNumber << " = " << firstNumber + secondNumber + thirdNumber << endl;
	cout << firstNumber << " * " << secondNumber << " * " << thirdNumber << " = " << firstNumber * secondNumber * thirdNumber << endl;
	return 0;

}