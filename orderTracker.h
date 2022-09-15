#ifndef tracking
#define tracking
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Tracker {
    public:
        string GetBurger(vector<string> food);
        string GetFries(vector<string> chip);
        string GetDrink(vector<string> softDrink);
        double totalPrice() const;
        void PrintInfo() const;
    private:
        vector<string> foodName;
        vector<double> foodPrice;
        vector<string> chipName;
        vector<double> chipPrice;
};

#endif