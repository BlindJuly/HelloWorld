#include <iostream>
#include <string>
#include <cmath>

#include <iomanip>
using namespace std;


void passwordChecker(string password){
    string userPass;
    bool charUpper;
    bool charLower;
    bool charDigit;

    cout << "A good password should have the following characteristics:" << endl;
    cout << "a. Have at least 6 characters." << endl;
    cout << "b. At least one character should be in uppercase." << endl;        
    cout << "c. At least one character should be in lowercase." << endl;        
    cout << "d. At least one character should be a digit." << endl;     
            
    while(true){
        cout << "Please choose a password: " << endl;
        getline(cin, userPass);
        if(userPass.length() >= 6){
            break;
        }
    }

    for (int i = 0; i <= userPass.length()-1; i++){
        char a = userPass[i];
        if(isupper(a)){
            charUpper = true;
        }
        else if(islower(a)){
            charLower = true;
        }
        else if(isdigit(a)){
            charDigit = true;
        }        
    }
    if (charUpper && charLower && charDigit){
        cout << "Password Strength: FANTASTIC!" << endl;
    }
    else{
        cout << "Password Strength: Garbage!" << endl;
    }
    return;

}




double computeRectArea(double length, double width){
    double Area = length*width;
    return Area;
}

double computeRectPerimeter(double length, double width){
    double perimeter = 2*length + 2*width;
    return perimeter;
}

double computeCircArea(double radius, const double PI=3.14){
    double area = PI*radius*radius;
    return area;
}

double computeCircPerimeter(double radius, const double PI=3.14){
    double perimeter = PI*radius*2;
    return perimeter;
}

double computeTriArea(double base, double height){
    double area = 0.5*base*height;
    return area;
}

double computeIsoTriPerimeter(double base, double height){
    double perimeter = ((base/2) / cos(asin(2*height/base)))*2 + base;
    return perimeter;
}

int main(){
    double width;
    double length;
    double base;
    double height;

cout << "Please enter the Length and Width of the rectange: " << endl;
cin >> length >> width;

cout << computeRectArea(length, width) << endl;

cout << "Please enter the base and height of a triangle: " << endl;
cin >> base >> height;

cout << computeIsoTriPerimeter(base, height) << endl;



}