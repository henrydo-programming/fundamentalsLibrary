#include <iostream>
#include <string>
using namespace std;

int main()
{	// stored strings
	string	s1 = "There once lived a person named ",
		s2 = " who lived in ",
		s3 = "\nwho loved ",
		s4 = ". At the age of ",
		s5 = ", ",
		s6 = " graduated \nfrom high school and went to",
		s7 = " university. \n",
		s8 = " graduated and had ",
		s9 = " children and a pet",
		s10 = " named ",
		s11 = ".\nEvery weekend the family and ",
		s12 = " had fun ",
		s13 = " together.";

	//values input by the user
	string name, city, activity, animal, product, petName;
	int age, kids;

	cout << "Enter the following information and I\'ll "
		<< "tell you a story. \n\n";
	cout << "Your name: ";
	getline(cin, name);

	cout << "The name of a city: ";
	getline(cin, city);

	cout << "A physical activity (e.g. jogging, playing baseball): ";
	getline(cin, activity);

	cout << "A food or product you can buy: ";
	getline(cin, petName);

	cout << "A number between 10 and 50: ";
	cin >> age;

	cout << "A number between 0 and 15: ";
	cin >> kids;

	cout << endl << s1 << name << s2 << city << s3 << activity;
	cout << s4 << age << s5 << name << s6 << product << s7;
	cout << name << s8 << kids << s9 << animal << s10 << petName;
	cout << s11 << petName << s12 << activity << s13 << endl;

	return 0;

}
