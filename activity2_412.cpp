#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int userInt;

    cout << "Enter the number of the month you want: " << endl;
    cin >> userInt;

    if (userInt >= 1 && userInt <= 12){
        cout << months[userInt-1] << endl;
    }


}