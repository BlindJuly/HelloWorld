#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int birthmonth;
    cout << "Insert the month of your Birthday <1-12>: " << endl;
    cin >> birthmonth;

    switch(birthmonth){
        case 1: cout << "Your birthday is Januaray! Happy Birthday!" << endl; break; 
        case 2: cout << "Your birthday is February! Happy Birthday!" << endl; break;
        case 3: cout << "Your birthday is March! Happy Birthday!" << endl; break;
        case 4: cout << "Your birthday is April! Happy Birthday!" << endl; break;
        case 5: cout << "Your birthday is May! Happy Birthday!" << endl; break;
        case 6: cout << "Your birthday is June! Happy Birthday!" << endl; break;
        case 7: cout << "Your birthday is July! Happy Birthday!" << endl; break;
        case 8: cout << "Your birthday is August! Happy Birthday!" << endl; break;
        case 9: cout << "Your birthday is September! Happy Birthday!" << endl; break;
        case 10: cout << "Your birthday is October! Happy Birthday!" << endl; break;
        case 11: cout << "Your birthday is November! Happy Birthday!" << endl; break;
        case 12: cout << "Your birthday is December! Happy Birthday!" << endl; break;
        default: cout << "try again, there are only 12 months in a year" << endl; 
    }

    return 0;

}
