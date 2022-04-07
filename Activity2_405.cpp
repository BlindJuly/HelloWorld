#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

void getUserInput(string arg1, double &arg2){
    while (arg2 <= 0){
        cout << arg1 << endl;
        cin >> arg2;
    }
}

double computeArea(double argL, double argW){
    return argL*argW;
}

void displayArea(double argL, double argW){
    cout << "Area of rect of length " << argL << " and width " << argW << " = " << computeArea(argL, argW) << endl;
}

int main(){
    double rectL = 0, rectW = 0;
    getUserInput("Enter Length: ", rectL);
    getUserInput("Enter Width: ", rectW);
    displayArea(rectL, rectW);
    return 0;
}