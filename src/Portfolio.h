#pragma once
#include <vector>
#include "Investment.h"
using namespace std;

class Portfolio{
    private: 
    vector<Investment> investment;
    double cashBalance = 10000.0; // starting cash (hard coded for now)

    public:
    void addInvestment(const string& symbol, int quantity, double price);
    void updatePrice(const string& symbol, double newPrice);
    void display() const;
    double totalValue() const;
}