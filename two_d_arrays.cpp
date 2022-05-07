#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int calendar[12][31];

    int numDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 31; j++){
            calendar[i][j] = -1;
        }
    }

    for (int i = 0; i < 12; i++){
        for (int j = 0; j < numDays[i]; j++){
            calendar[i][j] = j+1;
        }
    }

    for (int i = 0; i < 12; i++){
        cout << months[i] << endl;
        for (int j = 0; j < 31; j++){
            cout << setw(3);
            if (calendar[i][j] != -1){
                cout << calendar[i][j];
                if (((j+1) % 7) == 0){
                    cout << endl;
                }
            }

        }
    }

}