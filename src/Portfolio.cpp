#include "Portfolio.h"
#include<iostream>
#include<iomanip> // this is used for formatting.
using namespace std;

void Portfolio::addInvestment(const string& symbol, int quantity, double price){
    investment.push_back({symbol, quantity, price, price});
    cashBalance -= quantity * price;
}

void Portfolio::updatePrice(const string& symbol, double newPrice){
    for(auto& inv : investment){
        if(inv.symbol == symbol){
            inv.currentPrice = newPrice;
            return;
        }
    }
    cout<<"Symbol not found!\n";
}