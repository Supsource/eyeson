#pragma once
#include <string>
using namespace std;


// core data structure : represents a single investment
struct Investment {
    string symbol; // e.g "AAPL"
    int quantity;  //eg, 10 shares
};