#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "orderTracker.h"
using namespace std;

void helloWorld();
int main()
{   
	Tracker customer1;
	string burgerList;
	string Btemp;
	string friesList;
	string Ftemp;
	int count = 0;
	/*string menu[4] = {"Burger", "Fries", "Drink"};*/
	string burger[4] = {"Hamburger", "Chese Burger", "BBQ Burger", "Special Burger"};
	double burgerPrice[4] ={3, 4, 4, 5};
	string fries[4] = {"French fries", "Sweet Potato fries", "Waffle fries", "Curry fries"};
	double friesPRice[4] = {1.50, 2, 3, 3};
	vector<string> custOrder;
	

	// Prompt user to enter the first number. 
	cout << "Hello!, How may I help you?" << endl;
	for (int i = 0; i < 4; ++i){
		if (i < 3){
			cout << burger[i] + ", ";
		} else {
			cout << burger[i] + "?" << endl;
		}
	}
	cout << "What would you like to eat?" << endl;
	getline (cin, burgerList);
	istringstream iss(burgerList);

	while (iss >> Btemp) {
		custOrder.push_back(Btemp);
	}

	cout << "What fries would you like to eat?" << endl;
	getline (cin, friesList);
	istringstream is(friesList);

	while (iss >> Ftemp) {
		custOrder.push_back(Ftemp);
	}

	cout << "I have your order of: ";
	for (int i = 0; i < custOrder.size(); ++i){
		cout << custOrder[i] + ", ";
	}
	return 0;
}

void helloWorld() {
	cout << "nani?" << endl;
}