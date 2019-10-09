// Program name:		Compute Restaurant Bill (60 points)
// Program description: This program will asks the name of the four friends and the total amount of the bill.
//						It will then calculate and display the individual bill for each friend after including 20% tip
//
// Programmer name:		Henry Do
// Date:				September 17, 2019

#include <iostream>
#include <string>
using namespace std;

// function prototypes

int main()
{
	string	firstFriend,												//declares string variables
			secondFriend, 
			thirdFriend, 
			fourthFriend;
	float	totalBill,													//declares float variables
			tip, 
			totalBillAndTip, 
			totalBillAndTipForEach;

	tip = 0.20;															//assigns tip a value of 20 percent
	

	//collects inputs from user
	cout << "Enter first friend name: " << endl;						//asks the first name for each of the four friends and the total amount of the bill.
	cin >> firstFriend;
	cout << "Enter second friend name: " << endl;
	cin >> secondFriend;
	cout << "Enter third friend name: " << endl;
	cin >> thirdFriend;
	cout << "Enter fourth friend name: " << endl;
	cin >> fourthFriend;
	cout << "Enter the total bill: " << endl;
	cin >> totalBill;

	//computes total amounts in dollars
	totalBillAndTip = totalBill + (totalBill * tip);						//Adds the tip to the total amount and stores in a variable
	totalBillAndTipForEach = (totalBill + (totalBill * tip))/4;				//Calculates the amount owed by each friend, assuming they split equally

	//displays results
	cout << "Tip Amount: $ " << totalBillAndTipForEach << endl <<endl;
	cout << "Total Bill: $ " << totalBillAndTip << endl <<endl;
	cout << firstFriend << ": " << "$" << totalBillAndTipForEach << endl;
	cout << secondFriend << ": " << "$" << totalBillAndTipForEach << endl;
	cout << thirdFriend << ": " << "$" << totalBillAndTipForEach << endl;
	cout << fourthFriend << ": " << "$" << totalBillAndTipForEach << endl;


	return 0;
}