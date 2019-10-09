#include <iostream>
#include <string>
using namespace std;

int main()
{
	string	firstFriend, 
			secondFriend, 
			thirdFriend, 
			fourthFriend;
	float	totalBill, 
			tip, 
			totalBillAndTip, 
			totalBillAndTipForEach;

	tip = 0.20;
	
	cout << "Enter first friend name: " << endl;
	cin >> firstFriend;
	cout << "Enter second friend name: " << endl;
	cin >> secondFriend;
	cout << "Enter third friend name: " << endl;
	cin >> thirdFriend;
	cout << "Enter fourth friend name: " << endl;
	cin >> fourthFriend;
	cout << "Enter the total bill: " << endl;
	cin >> totalBill;

	totalBillAndTip = totalBill + (totalBill * tip);
	totalBillAndTipForEach = (totalBill + (totalBill * tip))/4;

	cout << "Tip Amount: $ " << totalBillAndTipForEach << endl <<endl;
	cout << "Total Bill: $ " << totalBillAndTip << endl <<endl;
	cout << firstFriend << ": " << "$" << totalBillAndTipForEach << endl;
	cout << secondFriend << ": " << "$" << totalBillAndTipForEach << endl;
	cout << thirdFriend << ": " << "$" << totalBillAndTipForEach << endl;
	cout << fourthFriend << ": " << "$" << totalBillAndTipForEach << endl;


	return 0;

}