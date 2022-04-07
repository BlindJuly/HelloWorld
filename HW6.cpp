#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std; 


double getCups(){
    double userValue = 0;
    while(userValue <= 0){
        cin >> userValue;
    }
    return userValue;
}

double cupsToOunces(double cupAmount){
    double ounces = 8*cupAmount;
    return ounces;
}

void displayResult(double result, double baseMeas){
    cout << baseMeas << " cups = " << result << " oz" << endl;
    return;
}


int main() {
    double cups = getCups();
    displayResult(cupsToOunces(cups), cups);

return 0;
}

