#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    const double commission = 0.035; //broker comission 3.5%
    const char dol = '$';
    string name;
    int shares;
    double purchPrice;
    double salesPrice;

    cout << "Enter the name of the company" << endl;

    getline(cin, name);

    cout << "Enter shares of stock" << endl;
    cin >> shares;

    cout << "Enter purchase price" << endl;
    cin >> purchPrice;

    cout << "Enter sale price" << endl;
    cin >> salesPrice;

    double purchTotal = purchPrice*shares;
    double purchComm = purchTotal*commission;
    double salesComm = salesPrice*shares;
    double salesTotal = salesPrice*shares;
    double netPurch = purchTotal + purchComm;
    double netSales = salesTotal + salesComm;
    
    cout << fixed << setprecision(2);
    cout << "Company: " <<  name << endl;
    cout << "Shares: " << shares << endl << endl;

    cout << "Purchase/share: " << dol << purchPrice << endl;
    cout << "Cost of stock: " << dol << purchPrice*shares << endl; 
    cout << "Cost of commission: " << dol << purchTotal << endl;
    cout << "Total cost: " << dol << netPurch << endl << endl;

    cout << "Sale/share: " << dol << salesPrice << endl;
    cout << "Income from stock: " << dol <<  salesTotal << endl;
    cout << "Cost of commission: " << dol << salesComm << endl;
    cout << "Total income: " << dol << netSales << endl << endl;

    cout << "Gain or loss: " << dol << (netSales - netPurch) << endl;
}