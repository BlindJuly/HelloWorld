#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    const double paintCost = 0.85; //dollars/sqft
    const double carpetCost = 5.15; //dollars/sqft
    double length;
    double width;
    double height;
    double carpetArea;
    double paintArea;
    double carpetPrice;
    double paintPrice;

    cout << "Please enter the Length, Width, and Height (L W H): " << endl;
    cin >> length >> width >> height;

    carpetArea = length*width;
    paintArea = 2*length*height + 2*width*height + length*width;
    carpetPrice = carpetArea*carpetCost;
    paintPrice = paintArea*paintCost;

    cout << "For " << carpetArea << " sqft the price will be $" << carpetPrice << endl;
    cout << "For " << paintArea << " sqft the price will be $" << paintArea << endl;

    return 0;



}