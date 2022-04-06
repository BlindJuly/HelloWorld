#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    unsigned int option;  //menu option
    const double speedAir = 1100;  //ft/s
    const double speedWater = 4900; //ft/s
    const double speedSteel = 16400; //ft/s
    double distance;
    double time;

    cout << "Select the medium that sound is traveling through:" << endl;
    cout << "1 Air" << endl;
    cout << "2 Water" << endl;
    cout << "3 Steel" << endl;

    cin >> option;

    if (option < 1 || option > 3){
        cout << "The menu value is invalid. Please run the program again." << endl;
        return 0;
    }

    cout << "Enter distance (in feet)" << endl;
    cin >> distance;

    if (distance <= 0){
        cout << "The distance must be greater than zero" << endl;
        return 0;
    }

    switch (option){
    case 1:
        time = distance / speedAir;
        cout << "Air: " << fixed << setprecision(4) << distance << " ft" << endl;
        cout << "Traveled for " << time << " seconds" << endl;
        break;
    case 2: 
        time = distance / speedWater;
        cout << "Water: " << fixed << setprecision(4) << distance << " ft" << endl;
        cout << "Traveled for " << time << " seconds" << endl;
        break;
    case 3:
        time = distance / speedSteel;
        cout << "Steel: " << fixed << setprecision(4) << distance << " ft" << endl;
        cout << "Traveled for " << time << " seconds" << endl;
        break;
    default:
        break;
    }    
}