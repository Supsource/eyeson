#pragma once
#include <string>
using namespace std;


// core data structure : represents a single investment
struct Investment {
    string symbol; // e.g "AAPL"
    int quantity;  //eg, 10 shares
    double purchasePrice; // eg, 150.34 USD
    double currentPrice; //eg, 163.23 USD

    // calculate the position value
    double value() const {
        return quantity * currentPrice;
    }

    // calculate profit/loss
    double profitLoss() const{
        return quantity * (currentPrice - purchasePrice);
    }
};