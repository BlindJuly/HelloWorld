#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

/*
The purpose of this program is to take in an input, the mass (kg) of an object, and convert that mass into Newtons (N), on Earth, Moon, and Venus.
1. Well will declare our constants which will be the "acceleration due to gravity on earth: 9.81 m/s/s", "... on the Moon: 1.62 m/s/s", and "... on Venus: 8.87 m/s/s"
2. Other variables declared will be the input variable, "mass".  Also the output "weight" as a result of the calculation of acceleration due to gravity and the mass.  
3.  IF the object is heavy (>1500 N) on Earth, then a message will be outputted saying it is too heavy.  
3. IF weight < 5 N, then object is light.
4. 4 decimal place precision. (mass and weight)
5.  This information will be displaced in 2 columns, titles: Location, Weight (N).  Left column width = 8 characters, 2nd column width = 14 characters (and right justified)
6.  If input mass <= 0, output message:  mass must be greater than 0.
*/

int main(){
    const double a_Earth = 9.81; //(m/s^2)
    const double a_Moon = 1.62; //(m/s^2) 
    const double a_Venus = 8.87; //(m/s^2)
    double mass;

    cout << "Enter the mass in kg" << endl;
    cin >> mass;

    if(mass <= 0){
        cout << setprecision(4) << showpoint << fixed;
        cout << "The mass is " << mass << " kg" << endl;
        cout << "The mass must be greater than zero" << endl;
    }
    else{
        cout << setprecision(4) << showpoint << fixed;
        cout << "The mass is " << mass << " kg" << endl;
        
        double w_Earth = mass*a_Earth;
        double w_Moon = mass*a_Moon;
        double w_Venus = mass*a_Venus;

        cout << "Location" << setw(14) << "Weight (N)" << endl;
        cout << "Earth" << setw(17) << w_Earth << endl;
        cout << "Moon"  << setw(18) << w_Moon << endl;
        cout << "Venus"  << setw(17) << w_Venus << endl;

        if(w_Earth > 1500.0000){
            cout << "The object is heavy" << endl;
        }
        else if(w_Earth < 5){
            cout << "The object is light" << endl;
        }
    }
    
}