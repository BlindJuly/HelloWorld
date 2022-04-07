#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std; 

int main() {

    long long int seconds, minutes, hours, days, timeRem, secondsRem;

    cout << "Enter Seconds " << endl;
    cin >> seconds;
    timeRem = seconds;
    for (int i = 1; i < 4; i++){
        if(i == 3){
               timeRem%24;
               timeRem /= 24;
        }
        else if (i == 1{
            timeRem / 60;
            timeRem%60;
        } 
           
    }
return 0;
}


secondsRem = seconds%60;
timeRem = seconds/60;
minutes = timeRem%60;
timeRem /= 60
hours = timeRem%24;
timeRem /= 24
