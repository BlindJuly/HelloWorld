#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.14;
    double radius;
    cout << "Please enter the Radius of the circle: " << endl;
    cin >> radius;
    
    if (radius > 0){
        double area = PI*radius*radius;
        double perimeter = 2*PI*radius;
        cout << "Area = " << area << endl;
        cout << "Perimeter = " << perimeter << endl;

    }

   return 0;
}