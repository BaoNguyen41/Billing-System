#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> custOrder;
	string custInput;

	// Prompt user to enter the first number. 
	cout << "Hello1, How may I help you?" << endl;
	cin >> custInput;
	while (custInput != "That's it") {
		custOrder.push_back(custInput);
	}
	cout << "I have your order of: ";
	for (int i = 0; i < custOrder.size(); ++i){
		cout << custOrder[i] + ", ";
	}
	return 0;
}