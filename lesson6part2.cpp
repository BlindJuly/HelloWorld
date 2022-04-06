#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double startTemp;
    double endTemp;
    double stepTemp;

    while(true){
        cin >> startTemp >> endTemp >> stepTemp;
        if(startTemp > endTemp || stepTemp <= 0.0000){
            cout << "Starting temperature must be <= ending temperature and increment must be > 0.0" << endl;
            continue;
        }
        else{
            break;
        }
    }
    double spanTemp = endTemp - startTemp;

    cout << setw(18) << "Fahrenheit" << setw(18) << "Celsius" << setw(18) << "Kelvin" << endl;

    for (double i = startTemp; i <= endTemp; i+=stepTemp){
        if(i > endTemp){
            break;
        }
        double cTemp = (i - 32) / 1.8;
        double kTemp = cTemp + 273.15;
        cout << fixed << setprecision(4) << setw(18) << i << setw(18) << cTemp << setw(18) << kTemp << endl;

    }

   

}