#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    
    int tnum;
    double average, sum = 0;
    int tests[5];

    for (int i = 0; i < 5; i++){
        cin >> tests[i];
    }
    for (tnum = 0; tnum < 5; tnum++){
        sum += tests[tnum];
    }

    cout << fixed << sum << endl;
    cout << "Average: " << fixed << sum/5 << endl;

}