#include "Portfolio.h"
#include<iostream>
#include<iomanip> // this is used for formatting.
using namespace std;

void Portfolio::addInvestment(const string& symbol, int quantity, double price){
    investments.push_back({symbol, quantity, price, price});
    cashBalance -= quantity * price;
}