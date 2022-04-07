#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;


/*going to ask user what shape they want to find the area of.  Depending on which shape, ask them for the factors to calculate that (using switch cases) 
Then we will calculate the area and output it*/

int main(){
    double radius;
    double length;
    double width;
    double base;
    double height;
    int user_Choice;
    double areaCircle;
    double areaRect;
    double areaTri;

    cout << "Please Enter <1-4> for the corresponding information you would like:" << endl << "1. Calculate Area of CIRCLE" << endl;
    cout << "2. Calculate Area of RECTANGLE" << endl << "3. Calculate Area of TRIANGLE" << endl << "4. Quit" << endl;
    cin >> user_Choice;

    switch(user_Choice){

        case 1: cout << "Enter radius: " << endl;
                cin >> radius;
                areaCircle = 3.14*radius*radius;
                cout << "Area of Circle: " << areaCircle << endl;
                break;

        case 2: cout << "Enter Length: " << endl;
                cin >> length;
                cout << "Enter Width: " << endl;
                cin >> width;
                areaRect = length*width;
                cout << "Area of Rectangle: " << areaRect << endl;
                break;

        case 3: cout << "Enter Base: " << endl;
                cin >> base;
                cout << "Enter Height: " << endl;
                cin >> height;
                areaTri = 0.5*base*height;
                cout << "Area of Triangle: " << areaTri << endl;
                break;
        
        case 4: cout << "Have a good day!" << endl;
                break;
        
        default: cout << "Try again another time, this program doesn't allow you to try again." << endl;
    }
    return 0;

}