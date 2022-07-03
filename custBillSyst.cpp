#include <iostream>
#include <vector>
#include <string>
using namespace std;

void helloWorld();
int main()
{   
	string custInput;
	int count = 0;
	/*string menu[4] = {"Burger", "Fries", "Drink"};*/
	string burger[4] = {"Hamburger", "Chese Burger", "BBQ Burger", "Special Burger"};
	double burgerPrice[4] ={3, 4, 4, 5};
	string fries[4] = {"French fries", "Sweet Potato fries", "Waffle fries", "Curry fries"};
	double friesPRice[4] = {1.50, 2, 3, 3};
	vector<string> custOrder;
	

	// Prompt user to enter the first number. 
	cout << "Hello1, How may I help you?" << endl;
	for (int i = 0; i < 4; ++i){
		if (i < 3){
			cout << burger[i] + ", ";
		} else {
			cout << burger[i] + "?" << endl;
		}
	}
	getline (cin, custInput);
	while (custInput != "That's it") {
		cout << count << " " << custInput << endl;
		custOrder.push_back(custInput);
		getline (cin, custInput);
		count++;
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