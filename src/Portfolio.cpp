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

void Portfolio::display() const {
    std::cout << "\n=== PORTFOLIO OVERVIEW ===\n";
    std::cout << std::left << std::setw(8) << "SYMBOL" 
              << std::setw(10) << "QTY" 
              << std::setw(12) << "COST BASIS"
              << std::setw(12) << "CUR PRICE"
              << std::setw(12) << "P/L" << "\n";
              
    for (const auto& inv : investment) {
        std::cout << std::setw(8) << inv.symbol
                  << std::setw(10) << inv.quantity
                  << std::setw(12) << std::fixed << std::setprecision(2) << inv.purchasePrice
                  << std::setw(12) << inv.currentPrice
                  << std::setw(12) << inv.profitLoss() << "\n";
    }
    
    std::cout << "\nCash Balance: $" << cashBalance << "\n";
    std::cout << "Total Portfolio Value: $" << totalValue() << "\n";
}

double Portfolio::totalValue() const {
    double total = cashBalance;
    for(const auto& inv : investment){
        total += inv.value();
    }
    return total;
}