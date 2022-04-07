#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

/*
1. Create variables and their values for the speed of sound in those mediums.
2. Display a menu for those mediums.  Take user input for what medium they want calculated.
3. Use if/ifelse/else statements to check for user input and output the correct formula for distance.
*/

int main(){
    unsigned int option;  //menu option
    const double speedCO2 = 258.0; // m/s 
    const double speedAir = 331.5; // m/s
    const double speedHe = 972.0; // m/s
    const double speedH = 1270.0; // m/s
    double distance;
    double time;

    cout << "Select the medium that sound is traveling through:" << endl;
    cout << "1 Carbon Dioxide" << endl;
    cout << "2 Air" << endl;
    cout << "3 Helium" << endl;
    cout << "4 Hydrogen" << endl;

    cin >> option;

    if (option < 1 || option > 4){
        cout << "The menu value is invalid. Please run the program again." << endl;
        return 0;
    }

    cout << "Enter time (in seconds)" << endl;
    cin >> time;

    if (time < 0.000 || time > 30.000){
        cout << "The time must be between 0.000 and 30.000 (inclusive)" << endl;
        return 0;
    }

    if (option == 1){
        cout << "Carbon Dioxide: " << fixed << setprecision(3) << time << " seconds" << endl;
        distance = speedCO2 * time;
        cout << "Traveled " << fixed << setprecision(4) << distance << " meters" << endl;
    }
    else if(option == 2){
        cout << "Air: " << fixed << setprecision(3) << time << " seconds" << endl;
        distance = speedAir * time;
        cout << "Traveled " << fixed << setprecision(4) << distance << " meters" << endl;
    }
    else if(option == 3){
        cout << "Helium: " << fixed << setprecision(3) << time << " seconds" << endl;
        distance = speedHe * time;
        cout << "Traveled " << fixed << setprecision(4) << distance << " meters" << endl;
    }
    else{
        cout << "Hydrogen: " << fixed << setprecision(3) << time << " seconds" << endl;
        distance = speedH * time;
        cout << "Traveled " << fixed << setprecision(4) << distance << " meters" << endl;
    }    

}