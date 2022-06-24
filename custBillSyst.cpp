#include <iostream>
using namespace std;

int main()
{
	float firstNumber;
	float secondNumber;


	// Prompt user to enter the first number. 
	cout << "Enter the first number" << endl;
	cin >> firstNumber;
	cout << "does it works?" << endl;

	// Prompt user to enter the second number. 
	cout << "Enter the second number" << endl;
	cout << "Then hit enter" << endl;
	cin >> secondNumber;

	// Echo print the input.
	cout << endl << "You input the numbers as " << firstNumber
		 << " and " << secondNumber << endl;


	return 0;
}