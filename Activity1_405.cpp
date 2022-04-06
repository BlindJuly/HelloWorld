#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

bool divisible(int num1, int num2){
    if (num1%num2 == 0){
        return true;
    }
    else{
        return false;
    }
}

double maxThree(double num1, double num2, double num3){
    if (max(num1, num2) == num1){
        return max(num1, num3);
    }
    else{
        return max(num2, num3);
    }
}

double getActualPrice(){
    double actualValue = 0;

    while (actualValue <= 0){
        cout << "Please enter the price that is greater than 0: " << endl;
        cin >> actualValue;
    }
    return actualValue;
}

double getMarkupPercent(){
    double markupValue = 0;

    while (markupValue <= 0){
        cout << "Please enter the mark up value: " << endl;
        cin >> markupValue;
    }
    return markupValue;
}

void computePrintRetail(double price, double markup){
    double tmp = price*(markup/100);
    double finalPrice = price + tmp;
    cout << "Base Price: " << price << endl;
    cout << "Markup addition: " << tmp << endl;
    cout << "Final Price: " << finalPrice << endl;
}




int main(){
    double actualPrice, markUp;

    actualPrice = getActualPrice();
    markUp = getMarkupPercent();

    computePrintRetail(actualPrice, markUp);
    
}