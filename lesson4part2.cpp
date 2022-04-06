#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std; 

int main() {
    long long int seconds;
    long long int minutes;
    long long int hours;
    long long int days;
    long long int daysRem;
    long long int hoursRem;
    long long int minuteRem;
    long long int secondRem;

    cout << "Enter seconds" << endl;
    cin >> seconds;

    cout << "Total seconds: " << seconds << endl << endl;

    if (seconds <= 0){
        cout << "Total seconds must be greater than zero" << endl;
    }

    else if(seconds >= 86400){
        days = seconds/86400;
        daysRem = seconds%86400;
        if(daysRem == 0){
            cout << days << " day(s)" << endl;
        }
        else if(daysRem >= 3600){
            hours = daysRem/3600;
            hoursRem = daysRem%3600;
            if(hoursRem == 0){
                cout << days << " day(s)" << endl;
                cout << hours << " hour(s)" << endl;    
            }
            else if (hoursRem >= 60){
                minutes = hoursRem/60;
                minuteRem = hoursRem%60;
                if(minuteRem == 0){
                    cout << days << " day(s)" << endl;
                    cout << hours << " hour(s)" << endl;
                    cout << minutes << " minute(s)" << endl;
                }
                else{
                    long long int secondRem = minuteRem;
                    cout << days << " day(s)" << endl;
                    cout << hours << " hour(s)" << endl;
                    cout << minutes << " minute(s)" << endl;
                    cout << secondRem << " second(s)" << endl;

                }
            }
            else{
                secondRem = hoursRem;
                cout << days << " day(s)" << endl;
                cout << hours << " hour(s)" << endl;
                cout << secondRem << " second(s)" << endl;  
            }
        }
        else{
            if(daysRem >= 60){
                minutes = daysRem/60;
                minuteRem = daysRem%60;
                if(minuteRem == 0){
                    cout << days << " day(s)" << endl;
                    cout << minutes << " minute(s)" << endl;
                }
                else{
                    secondRem = minuteRem;
                    cout << days << " day(s)" << endl;
                    cout << minutes << " minute(s)" << endl;
                    cout << secondRem << " second(s)" << endl;
                }
            }
            else{
                secondRem = daysRem;
                cout << days << " day(s)" << endl;
                cout << secondRem << " second(s)" << endl;
            }  
            
        }
    }
    else if(seconds >= 3600){
        long long int hours = seconds/3600;
        long long int hoursRem = seconds%3600;
        if(hoursRem == 0){
                cout << hours << " hour(s)" << endl;
        }
        else if(hoursRem >=60){
            long long int minutes = hoursRem/60;
            long long int minuteRem = hoursRem%60;
            if(minuteRem == 0){
                cout << hours << " hour(s)" << endl;
                cout << minutes << " minute(s)" << endl;
            }
            else{
                long long int secondRem = minuteRem;
                cout << hours << " hour(s)" << endl;
                cout << minutes << " minute(s)" << endl;
                cout << secondRem << " second(s)" << endl;
            }
        }
        else{
            secondRem = hoursRem;
            cout << hours << " hour(s)" << endl;
            cout << secondRem << " second(s)" << endl;    
        }     
    }
    else if(seconds >= 60){
        long long int minutes = seconds/60;
        long long int minuteRem = seconds%60;
        if(minuteRem == 0){
            cout << minutes << " minute(s)" << endl;
        }
        else{
            long long int secondRem = minuteRem;
            cout << minutes << " minute(s)" << endl;
            cout << secondRem << " second(s)" << endl; 
        }   
    }
    else{
        cout << seconds << " second(s)" << endl;
    }    
    return 0;
}