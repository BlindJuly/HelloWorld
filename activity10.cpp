#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double len1;
    double len2;
    double width1;
    double width2;

    cout << "Enter the length and width of rectangle 1: " << endl;
    cin >> len1 >> width1;
    cout << "Enter the length and width of rectangle 2: " << endl;
    cin >> len2 >> width2;

    cout << "Length 1: " << len1 << endl << "Length 2: " << width1 << endl << "Length 2: " << len2 << endl << "Width 2: " << width2 << endl;

    double area1 = len1*width1;
    double area2 = len2*width2;

    cout << "Area 1: " << area1 <<  area2;

    if (area1 > area2){
        cout << "Rectangle 1 has a larger area than Rectangle 2" << endl;
        cout << len1 << width1 << len2 << width2;
    }
    else if (area2 > area1){
        cout << "Rectangle 2 has a larger area than Rectangle 1" << endl;
    }
    else{
        cout << "Both rectangles have the same area!" << endl;
    }
}