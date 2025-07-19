#include "Portfolio.h"
#include <iostream>
using namespace std;

int main(){
    Portfolio myPortfolio;
    int choice;

    while(true){
        cout<<"\nPortfolio Tracker\n";
        cout<<"1. Add Investment\n";
        cout<<"2. Update Price\n";
        cout<<"3. View Portfolio\n";
        cout<<"4. Exit\n";
        cin>>choice;

        switch(choice){
            case 1:{
                string sym;
                int qyt;
                double price;

                cout<<"Enter Symbol : ";
                cin>>sym;
                cout<<"Enter quantity: ";
                cin>>qyt;
                cout<<"Enter purchase price ";
                cin>>price;

                myPortfolio.addInvestment(sym, qyt, price);
                break;
            }
        }
    }
}