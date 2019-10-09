//Program Name:								Problem 1: Shippinh Charges (60 points)
//Program Description:						This program will allow a user to calculate total charges based on package weight and distance
//Programmer Name:							Henry Do
//Date:										October 8, 2019

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
	//named constants for weight inputed by users
	const int	WEIGHT_LEVEL_0 = 0,
				WEIGHT_LEVEL_1 = 10,
				WEIGHT_LEVEL_2 = 15,
				WEIGHT_LEVEL_3 = 20;

	//named constants for distance inputed by users
	const int	DISTANCE_LEVEL_0 = 0,
				DISTANCE_LEVEL_1 = 50,
				DISTANCE_LEVEL_2 = 100,
				DISTANCE_LEVEL_3 = 200,
				DISTANCE_LEVEL_4 = 500;

	//named constants for weight inputed by users
	const double	WEIGHT_PRICE_LEVEL_0 = 0.75,
					WEIGHT_PRICE_LEVEL_1 = 0.85,
					WEIGHT_PRICE_LEVEL_2 = 0.95;

	//named constants for distance inputed by users
	const double	DISTANCE_PRICE_LEVEL_0 = 0.07,
					DISTANCE_PRICE_LEVEL_1 = 0.06,
					DISTANCE_PRICE_LEVEL_2 = 0.05,
					DISTANCE_PRICE_LEVEL_3 = 0.04;

	double	pounds,					// package weight inputed by the user
			miles,					// package distance inputed by the user
			pricePounds,			// weight charge of the package
			priceMiles;				// distance charge of the package

	//declares boolean datatype flags to track user inputs that are not allowed
	bool	poundsError = 1,
			milesError = 1;
	
	//input validation for package weight
	while (poundsError != 0)
	{
		cout << "Input for weight of parcel should between 0 and 20 (inclusive).\n";
		cout << "Please enter the weight in pounds of your package: ";
		cin >> pounds;
		if (pounds < WEIGHT_LEVEL_3 && pounds >= WEIGHT_LEVEL_0)
		{
			poundsError = 0;
		}
		else
		{
			cout << "ERROR. NOT ALLOWED." << endl;
		}
	}

	//determines the price per pound
	if (pounds >= WEIGHT_LEVEL_0 && pounds <= WEIGHT_LEVEL_1)
	{	
		pricePounds = WEIGHT_PRICE_LEVEL_0;
	}
	else if (pounds > WEIGHT_LEVEL_1 && pounds <= WEIGHT_LEVEL_2)
	{
		pricePounds = WEIGHT_PRICE_LEVEL_1;
	}
	else if (pounds > WEIGHT_LEVEL_2 && pounds <= WEIGHT_LEVEL_3)
	{
		pricePounds = WEIGHT_PRICE_LEVEL_2;
	}

	//input validation for package distance
	while (milesError != 0)
	{
		cout << "\nInput for distance should between 0 and 500 (inclusive).\n";
		cout << "Please enter the distance in miles of your package: ";
		cin >> miles;
		if (miles < 500 && miles >= 0)
		{
			milesError = 0;
		}
		else
		{
			cout << "ERROR. NOT ALLOWED" << endl;
		}
	}

	//determines the price per mile
	if (miles > DISTANCE_LEVEL_4 || miles < DISTANCE_LEVEL_0)
	{
		milesError = 1;
	}
	else if (miles >= DISTANCE_LEVEL_0 && miles <= DISTANCE_LEVEL_1)
	{
		priceMiles = DISTANCE_PRICE_LEVEL_0;
	}
	else if (miles > DISTANCE_LEVEL_1 && miles <= DISTANCE_LEVEL_2)
	{
		priceMiles = DISTANCE_PRICE_LEVEL_1;
	}
	else if (miles > DISTANCE_LEVEL_2 && miles <= DISTANCE_LEVEL_3)
	{
		priceMiles = DISTANCE_PRICE_LEVEL_2;
	}
	else if (miles > DISTANCE_LEVEL_3 && miles <= DISTANCE_LEVEL_4)
	{
		priceMiles = DISTANCE_PRICE_LEVEL_3;
	}

	//displays the weight and distance charge
	cout << "The total weight charge is $ " << (pounds * pricePounds) << endl;
	cout << "The total distance charge is $ " << (miles * priceMiles) << endl;

	//displays the total charge
	cout << "Your total charge is $" << (pounds * pricePounds) + (miles * priceMiles) << setprecision(3) << endl;
	
	return 0;
}